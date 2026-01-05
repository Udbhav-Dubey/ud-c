#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Node{
    int data;
    struct Node*next;
};
int isEmpty(struct Node*head){
    return head==NULL;
}
void push(struct Node**head,int new_data){
    struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}
void pop(struct Node**head){
    if (isEmpty(*head))return ;
    struct Node*temp=*head;
    *head=(*head)->next;
    free(temp);
}
int peek(struct Node*head){
    if (!isEmpty(head)) return head->data;
    return INT_MIN;
}
int main (){
    struct Node*head=nullptr;
    push(&head,11);
    push(&head,22);
    push(&head,33);
    push(&head,44);
    printf("%d\n",peek(head));
    pop(&head);
    pop(&head);
    printf("%d\n",peek(head));
    return 0;
}
