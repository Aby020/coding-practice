# include <stdio.h>
# include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* top=NULL;
int size,count=0;

void push(int value)
{
    if(count==size)
    {
        printf("Stack is full\n");
        return;
    }
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Stack is full\n");
    }
    newnode->data=value;
    newnode->next=top;
    top=newnode;
    
    count++;
    printf("Pushed element %d",value);
}
void pop()
{
    if(top==NULL)
    {
        printf("stack is empty");
        return;
    }
    struct node* temp=top;
    printf("pooped element %d\n",top->data);
    top=top->next;
    free(temp);
    count--;
}

void display()
{
    if(top==NULL)
    {
        printf("Stack is empty");
        return;
    }
    printf("stack elements are:\n");
    struct node* temp=top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
}

void main() {
    printf("Enter the stack size\n");
    scanf("%d", &size);  // Set the maximum stack size

    int choice, value;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the push element\n");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid input\n");
        }
    }
}















