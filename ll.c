#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void printList(struct Node*head){
    struct Node*curr=head;
    while(curr!=NULL){
        printf("%d->",curr->data);
        curr=curr->next;
    }
    printf("NULL");
}
struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL){printf("Memory allocation failed");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
int main (){
    struct Node*node1=createNode(10);
    struct Node*node2=createNode(20);
    struct Node*node3=createNode(30);
    node1->next=node2;
    node2->next=node3;
    struct Node*head=node1;
    printList(head);
    struct Node*temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
return 0;
}
