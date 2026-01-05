#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*createNode(int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL){printf("allocation failed");exit(1);}
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
void printList(struct Node*head){
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}
struct Node*insertatfront(struct Node*head,int el){
    struct Node*temp=createNode(el);
    temp->next=head;
    head=temp;
//    free(temp);
    return head;
}
int main (){
    printf("enter the number of nodes : ");
    int n;
    scanf("%d",&n);
    struct Node*head=NULL;
    struct Node*tail=NULL;
    for (int i=0;i<n;i++){
        int value;
        printf("enter the value at %d node : ",i+1);
        scanf("%d",&value);
        struct Node*newnode=createNode(value);
        if (head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        } 
    }
    printf("your linked list is ");
    printList(head);
    printf("enter the element to insert at beginning of list : ");
    int el;
    scanf("%d",&el);
    head=insertatfront(head,el);
    printf("Now list is");
    printList(head);
    struct Node*temp;
    while(head!=NULL){
    temp=head;
    head=head->next;
    free(temp);
    }
return 0;
}
