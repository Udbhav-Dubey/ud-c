#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node*createnode(int value){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){
        printf("allocation failed");
        exit(1);
    }
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
};
void printList(struct Node*head){
    printf("forward: ");
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
    printf("reverse: ");
    struct Node*forw=head;
    while(forw->next!=NULL){forw=forw->next;}
    while(forw!=NULL){
        printf("%d->",forw->data);
        forw=forw->prev;
    }
    printf("NULL\n");
}
struct Node*insertatfront(struct Node*head,int el){
    struct Node*temp=createnode(el);
    if (head==NULL){return temp;}
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
struct Node*insertatend(struct Node*head,int elb){
    struct Node*temp=createnode(elb);
    if (head==NULL){return temp;}
    struct Node*curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
struct Node*insertatpos(struct Node*head,int el1,int pos){
    if (pos==0)return insertatfront(head,el1);
    struct Node*temp=createnode(el1);
    int i=0;
    struct Node*curr=head;
    while(curr!=NULL&&i<pos-1){
        curr=curr->next;
        i++;
    }
    if (curr==NULL){
        printf("invalid position\n");
        free(temp);
        return head;
    }
    struct Node*temp1=curr->next;
    curr->next=temp;
    temp->prev=curr;
    temp->next=temp1;
    if (temp1!=NULL)temp1->prev=temp;
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
    printf("enter the element for front : ");
    int el;
    scanf("%d",&el);
    head=insertatfront(head,el);
    printList(head);
    printf("enter the element to insert at end : ");
    int elb;
    scanf ("%d",&elb);
    head=insertatend(head,elb);
    printList(head);
    printf("enter the element to insert at specific position,enter the element : ");
    int el1;
    scanf("%d",&el1);
    printf("enter the position :");
    int pos;
    scanf("%d",&pos);
    head=insertatpos(head,el1,pos);
    printList(head);
    return 0;
}
