#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node* createNode(int val){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){
        printf("Allocation failed");
        exit(1);
    }
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
}
void printlist(struct Node*head){
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}
struct Node*deleteatbeg(struct Node*head){
    if (head==NULL||head->next==NULL){return NULL;}
    struct Node*temp=head;
    head=head->next;
    free(temp);
    return head;
}
struct Node*deleteatend(struct Node*head){
    if (head==NULL||head->next==NULL){return NULL;}
    struct Node*curr=head;
    while(curr->next->next!=NULL){
       curr=curr->next;
    }
    struct Node*temp=curr->next;
    curr->next=NULL;
    free(temp);
    return head;
}
int main (){
    printf("enter the number of nodes : ");
    int n;
    scanf("%d",&n);
    struct Node*tail=NULL;
    struct Node*head=NULL;
    for (int i=0;i<n;i++){
        int val;
        printf("enter the value for %d node ",i+1);
        scanf("%d",&val);
        struct Node*newnode=createNode(val);
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
    printf("to delete from the beginning : ");
    head=deleteatbeg(head);
    printlist(head);
    printf("to delete at end of list : ");
    head=deleteatend(head);
    printlist(head);
return 0;
}
