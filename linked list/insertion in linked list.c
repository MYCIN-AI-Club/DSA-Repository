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
int delete(struct node* p,int value)
{
    struct node* save;
    save=p;
    if(p->info==value)
    {
        first=p->next;
        return 0;
    }
    while(p!=NULL)
    {
        if(p->info==value)
        {
            save->next=p->next;
            free(p);
            return 0;
        }
        else
        {
        save=p;
        p=p->next;
        }
    }
    printf("Element not found");
}


int main()
{
     printf("Name- Raunak Jain\nRoll No. 2100290120140\n");
    int n;
    printf("Enter the number of elements in linked list: ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    create(a,n);
    int val;
    printf("Enter the value you want to delete\n");
    scanf("%d",&val);
    printf("Linked list before deletion is\n");
    display(first);
    delete(first,val);
    printf("\nLinked list after deletion is\n");
    display(first);

    return 0;
}
