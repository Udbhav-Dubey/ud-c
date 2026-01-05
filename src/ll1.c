#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node*next;
}Node;
Node* createNode(int data){
    Node* newNode=(Node*)malloc(sizeof(Node));
    if (newNode==NULL){
        printf("Allocation failed");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void printList(Node* head){
    Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL\n");
}
int main (){
    int n;
    printf("insert number of nodes : ");
    scanf("%d",&n);
    Node*head=NULL;
    Node*tail=NULL;
    for (int i=0;i<n;i++){
        int value;
        printf("please insert the value at %d th node : ",i+1);
        scanf("%d",&value);
        Node*newnode=createNode(value);
        if (head==NULL){
            head=newnode;
            tail=newnode;
        }
        else {
            tail->next=newnode;
            tail=newnode;
        }
    }
    printf("Your linked list : ");
    printList(head);
    Node*temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
return 0;
}
