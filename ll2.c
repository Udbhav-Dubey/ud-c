#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*createNode(int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL){
        printf("allocation failed");
        exit(1);
    }
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
void searchel(struct Node*head,int el){
    struct Node*curr=head;
    while(curr!=NULL){
        if (curr->data==el){
            printf("found\n");
            return;
        }
        curr=curr->next;
    }
    printf("its not here \n");
    return ;
}
int main (){
    int n;
    printf("please enter number of nodes");
    scanf("%d",&n);
    struct Node*tail=NULL;
    struct Node*head=NULL;
    for (int i=0;i<n;i++){
        int value;
        printf("Enter the value for node %d ",i+1);
        scanf("%d",&value);
       struct Node* newNode=createNode(value);
        if (head==NULL){
            head=newNode;
            tail=newNode;
        }
        else {
            tail->next=newNode;
            tail=newNode;
        }
    }
    printf("your linked list is ");
    printList(head);
    printf("enter the element to search : ");
    int el;
    scanf("%d",&el);
    searchel(head,el);
    
    struct Node*temp;
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
return 0;
}
