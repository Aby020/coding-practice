# include <stdio.h>

# define max 100

int graph[max][max], visited[max], stack[max], top=-1,n,i;

int nodes[max];

void push(int value)
{
    stack[++top]=value;
    }
void pop()
{
    top--;
    }

void dfs(int start)
{
    push(start);
    visited[start]= 1;
    printf("Traversal order:");
    while(top!= -1)
    {
        int current= stack[top];
        pop();
        printf("%d ->",nodes[current]);
        for(i=0;i<n;i++)
        {
            if(graph[current][i] && !visited[i])
            {
                visited[i]=1;
                push(i);
            }
        }
    }
    printf("End\n");
}

void main()
{
    printf("Enter the nodes:\n");
    scanf("%d",&n);
    
    printf("Enter node labels:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nodes[i]);
    }
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
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
        printf("Invlaid input:\n");
        return;
    }
    dfs(start_index);

}