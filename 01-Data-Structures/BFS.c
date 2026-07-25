# include<stdio.h>
# define max 100

int graph[max][max],visited[max],queue[max],front=-1,rear=-1,n,i;

int nodes[max];

void add(int value)
{
    if(rear==max-1)
    return;
    if(front==-1)front=0;
    queue[++rear]=value;
    
}
int delete()
{
    if(front==-1||front>rear)
        return -1;
    return queue[front++];
    
}

void bfs(int start)
{
    add(start);
    visited[start]=1;
    printf("traversal order: ");
    while(front!=-1 && front <=rear)
    {
        int current=delete();
        printf("%d ->",nodes[current]);
        for(i=0;i<n;i++)
        {
            if(graph[current][i] && !visited[i])
            {
                visited[i]=1;
                add(i);
            }
            
        }
    }
    printf("End\n");
}

void main()
{
    printf("Enter the no of nodes: ");
    scanf("%d",&n);
    
    printf("Enter the node labels:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nodes[i]);
    
    }
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Edge between %d and %d\n",nodes[i],nodes[j]);
            scanf("%d",&graph[i][j]);
        }
    }
    printf("Enter the starting node:\n");
    int start_node;
    scanf("%d",&start_node);
    
    int start_index=-1;
    for(i=0;i<n;i++)
    {
        if(nodes[i]==start_node)
        {
            start_index=i;
            break;
        }
    }
    if(start_index==-1)
    {
        printf("Invalid\n");
        return;
    }
    bfs(start_index);
    
    
    
    
    
    
    
    
    
    
}