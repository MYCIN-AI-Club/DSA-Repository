/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node* insertatfirst(struct Node *head,int data)
{
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
}
struct Node* insertatany(struct Node*head,int data,int index)
{
struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
struct Node*p=head;
ptr->next=head;
int i=0;
while(i!=index-2)
{
    p=p->next;
    i++;
}
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
void trav(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int ele1,ele2,ele3,data,index;
    struct Node*head=(struct Node*)malloc(sizeof(struct Node));
    struct Node*second=(struct Node*)malloc(sizeof(struct Node));
    struct Node*third=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the elements in the liked list\n");
    scanf("%d %d %d",&ele1,&ele2,&ele3);
    head->data=ele1;
    head->next=second;
    second->data=ele2;
    second->next=third;
    third->data=ele3;
    third->next=NULL;
   printf("Enter the index at which you want to insert:");
    scanf("%d",&index);
    printf("Enter the data:");
    scanf("%d",&data);
    head=insertatany(head,data,index);
    trav(head);
    return 0;
}

