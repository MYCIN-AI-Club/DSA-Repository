#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node* next;
    
}*first;

void create(int a[],int n)
{
    int i;
    struct node* t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->info=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->info=a[i];
        last->next=t;
        last=t;
    }
}
void display(struct node* p)
{
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->next;
    }
}

int insert(struct node* p,int value,int loc)
{
    while(p!=NULL)
    {
        if(p->info==loc)
        {
            struct node* new;
            new=(struct node*)malloc(sizeof(struct node));
            new->info=value;
            new->next=p->next;
            p->next=new;
            return 0;
        }
        else
        {
            p=p->next;
        }
    }
    return 0;
}

int main()
{
  
    int n;
    printf("Enter the number of elements in linked list: ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    create(a,n);
    int val,loc;
    printf("Enter the value you want to insert\n");
    scanf("%d",&val);
    printf("Enter the value after which you want to insert\n");
    scanf("%d",&loc);
    printf("Linked list before insertion is\n");
    display(first);
    //delete(first,val);
    insert(first,val,loc);
    printf("\nLinked list after insertion is\n");
    display(first);
    return 0;
}
