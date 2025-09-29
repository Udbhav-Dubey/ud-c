#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*createnode(int val){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){
        printf("allocation failed \n");
        exit(1);
    }
    newnode->data=val;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
};
void printList(struct Node*head){
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
    printf("in reverse : ");
    struct Node*temp=head;
    while(temp->next!=NULL){temp=temp->next;}
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->prev;
    }
    printf("NULL\n");
}
void searchelement(struct Node*head,int el){
    struct Node*curr=head;
    while(curr!=NULL){
        if (curr->data==el){
            printf("found\n");
            return ;
        }
        curr=curr->next;
    }
    printf("not found\n");
}
int main (){
    printf("enter the number of nodes :  ");
    int n;
    scanf("%d",&n);
    struct Node*tail=NULL;
    struct Node*head=NULL;
    for (int i=0;i<n;i++){
        int value;
        printf("enter the value : ");
        scanf("%d",&value);
        struct Node*newnode=createnode(value);
        if (head==NULL){
            head=newnode;
            tail=newnode;
        }
        else {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    printList(head);
    printf("enter the element to search : ");
    int x;
    scanf("%d",&x);
    searchelement(head,x);
return 0;
}
