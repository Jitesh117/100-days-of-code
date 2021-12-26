#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert(int data, int n)
{
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = data;
    temp1->next =NULL;

    if(n==1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
   struct node* temp2 = head;
    int i;
    for(i = 1;i<n-1;i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next =temp1;
}

void Print()
{
    struct node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}

int main()
{
    head = NULL;
    int x;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d",&x);
    int n,i,data;
    for(i = 0;i<x;i++)
    {
            printf("\nEnter the element and the position");
            scanf("%d %d" ,&data,&n);
            insert(data,n);
    }
 /* insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);*/
    Print();
    return 0;
}
