#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void push(struct Node**top,int value){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL){exit(1);}
    newnode->next=*top;
    newnode->data=value;
    *top=newnode;
}
int pop(struct Node**top){
    if (*top==NULL){
        printf("stack underflow");
        return -1;
    }
    struct Node*temp=*top;
    int data=temp->data;
    *top=(*top)->next;
    free(temp);
    return data;
}
int peek(struct Node*top){
    if (top==NULL){
        exit(1);
    }
    return top->data;
}
int isEmpty(struct Node*top){
    return top==NULL;
}
void display(struct Node*top){
    if (isEmpty(top)){
        printf("stack is empty!\n");
        return ;
    }
    printf("Stack elements: ");
    struct Node*temp=top;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main (){
     struct Node* top = NULL;  // empty stack

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);

    display(top);

    printf("Top element: %d\n", peek(top));

    printf("Popped: %d\n", pop(&top));
    display(top);

    return 0;
}
