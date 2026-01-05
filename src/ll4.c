#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*createNode(int value){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){
        printf("Allocation failed");
        exit(1);
    }
    newnode->next=NULL;
    newnode->data=value;
    return newnode;
}
void printList(struct Node*head){
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL");
}
struct Node*insertatEnd(struct Node*head,int el){
    struct Node*curr=head;
    struct Node*temp=createNode(el);
    if (head==NULL){return temp;}
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
struct Node*insertatspec(struct Node*head,int el2,int pos){
    struct Node*temp=createNode(el2);
    if (pos==0){
        temp->next=head;
        return temp;
    }
    if (head==NULL){return temp;}
    struct Node*curr=head;
    int i=0;
    while(curr!=NULL && i<pos-1){
        curr=curr->next;
        i++;
    }
    struct Node *temp1=curr->next;
    curr->next=temp;
    temp->next=temp1;
    return head;
}
int main (){
    printf("enter the number of nodes : ");
    int n;
    scanf("%d",&n);
    struct Node*tail=NULL;
    struct Node*head=NULL;
    for (int i=0;i<n;i++){
        int value;
        printf("enter the value to print at %d node ",i+1);
        scanf("%d",&value);
        struct Node*newnode=createNode(value);
        if (head==NULL){
            head=newnode;
            tail=newnode;
        }
        else {
            tail->next=newnode;
            tail=newnode;
        }
    }
    printList(head);
    printf("\ninsert the value you want to insert at end of the list : ");
    int el;
    scanf("%d",&el);
    head=insertatEnd(head,el);
    printList(head);
    printf("\ninsert the index after which to add new element : ");
    int pos;
    scanf("%d",&pos);
    if (pos>n || pos<0){printf("not possible");exit(2);}
    int el2;
    printf("enter the element to insert : ");
    scanf("%d",&el2);
    head=insertatspec(head,el2,pos);
    printList(head);
return 0;
}
