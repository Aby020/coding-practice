# include <stdio.h>
# define max 100
int stack[max],top=-1,size;

void push(int value)
{
    if(top==size-1)
    {
        printf("Stack is full(overflow)\n");
    }
    else
    {
        stack[++top]=value;
        printf("Topped element is %d\n",value);

    }

}
void pop(int value)
{
    if(top==-1)
    {
        printf("Stack is empty(underflow)\n");
    }
    else
    {
        value=stack[top--];
        printf("Pooped element is %d\n",value);

    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty(underflow)\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }

}
void main()
{
    printf("Enter the stack size\n");
    scanf("%d",&size);
    int choice,value;
    while(1)
    {    
      
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter the push element\n");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop(value);
            break;
        case 3:
            display();
            break;
        case 4:
            return;          
        
        default:
            printf("invalid input");
            break;
            
        }
    }
}
    


