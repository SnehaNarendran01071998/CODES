#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
/*SortedMerge() function that takes two lists, each of which is sorted in increasing order, and merges the two together into one list which is in increasing order.*/
struct  Node
{
    int data;
    struct Node* next;
};
void MoveNode(struct Node** destref,struct Node** sourceref);
struct Node* SortedMerge(struct Node* a,struct Node* b)
{
    struct Node dummy;
    struct Node* tail=&dummy;
    dummy.next=NULL;
    while(1)
    {
        if(a==NULL)
        {
            tail->next=b;
            break;
        }
        else if(b==NULL)
        {
            tail->next=a;
            break;
        }
        if(a->data<=b->data)
            MoveNode(&(tail->next),&a);
        else
            MoveNode(&(tail->next),&b);
        tail=tail->next;
    }
    return(dummy.next);
}
void MoveNode(struct Node** destref,struct Node** sourceref)
{
    struct Node* newnode=*sourceref;
    
    *sourceref=newnode->next;
    newnode->next=*destref;
    *destref=newnode;
}
void push(struct Node** headref,int new_data)
{
    struct  Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*headref);
    (*headref)=new_node;
}
void print(struct Node *node)
{
    while(node!=NULL)
    {
        printf("%d",node->data);
        node=node->next;
        if(node==NULL)
            break;
        else
        printf("->");
    }
}
int main()
{
    struct Node* res=NULL;
    struct Node* a=NULL;
    struct Node* b=NULL;
    push(&a, 3);
    push(&a, 2);
    push(&a, 1);
 
    push(&b, 6);
    push(&b, 5);
    push(&b, 4);
 
    /* Remove duplicates from linked list */
    res = SortedMerge(a, b);
 
   
    print(res);
 
    return 0;

}