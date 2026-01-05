#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node*createNode(int value){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){
        printf("allocation failed ");
        exit(0);
    }
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void printList(struct Node*head){
    printf("printing forward : ");
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}
struct Node*deleteatfront(struct Node*head){
    if (head==NULL){return NULL;}
    struct Node*temp=head;
    head=head->next;
    if (head!=NULL)head->prev=NULL;
    free(temp);
    return head;
}
struct Node*deleteatback(struct Node*head){
    if (head==NULL){return NULL;}
    if (head->next==NULL){
        free(head);
        return NULL;
    }
    struct Node*curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    struct Node*temp=curr->next;
    curr->next=NULL;
    free(temp);
    return head;
}
struct Node*deleteatspec(struct Node*head,int pos){
    if (head==NULL){return NULL;}
    if (pos==0){return deleteatfront(head);}
    int i=0;
    struct Node*curr=head;
    while(curr!=NULL&&i<pos){
        curr=curr->next;
        i++;
    }
    if (curr==NULL)return head;
    if (curr->prev!=NULL){
        curr->prev->next=curr->next;
    }
    if (curr->next!=NULL){
        curr->next->prev=curr->prev;
    }
    free(curr);
    return head;
}
int main(){
    int n;
    printf("enter the number of nodes : ");
    scanf("%d",&n); 
    struct Node*head=NULL;
    struct Node*tail=NULL;
    for(int i=0;i<n;i++){
        int value;
        printf("enter the value : ");
        scanf("%d",&value);
        struct Node*newnode=createNode(value);
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
    printf("deletion at front : ");
    head=deleteatfront(head);
    printList(head);
    head=deleteatback(head);
    printList(head);
    int pos;
    printf("enter the position to insert at : ");
    scanf("%d",&pos);
    head=deleteatspec(head,pos);
    printList(head);
return 0;
}
