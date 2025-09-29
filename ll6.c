#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*createNode(int data){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){printf("allocation failed");exit(1);}
    newnode->next=NULL;
    newnode->data=data;
    return newnode;
}
void printlist(struct Node*head){
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL");
}
struct Node*deleteatloc(struct Node*head,int pos){
    if (head==NULL){
        return NULL;
    }
    if (pos==0){
        struct Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    struct Node*curr=head;
    int i=0;
    while(curr!=NULL&&i<pos-1){
        curr=curr->next;
        i++;
    }
    if (curr==NULL||curr->next==NULL){
        printf("out of bound ");
        return head;
    }
    struct Node*temp=curr->next;
    curr->next=curr->next->next;
    free(temp);
    return head;
}
int main (){
    printf("enter the number of nodes : ");
    int n;
    scanf("%d",&n);
    struct Node*head=NULL;
    struct Node*tail=NULL;
    for (int i=0;i<n;i++){
        printf("enter the value : ");
        int value;
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
    printlist(head);
    printf("enter the location to delete at : ");
    int pos;
    scanf("%d",&pos);
    head=deleteatloc(head,pos);
    printlist(head);
return 0;
}
