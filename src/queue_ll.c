#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Queue{
    struct Node*front;
    struct Node*rear;
};
void initQueue(struct Queue*q){
    q->front=q->rear=NULL;
}
int isEmpty(struct Queue*q){
    return q->front==NULL;
}
void enqueue(struct Queue*q,int value){
    struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->next=NULL;
    if (isEmpty(q)){
        q->front=q->rear=temp;
    }
    else {
        q->rear->next=temp;
        q->rear=temp;
    }
    printf("%d enqueued\n",value);
}
int dequeue(struct Queue*q){
    if (isEmpty(q)){
        printf("Queue is empty! nothing to dequeue \n");
        return -1;
    }
    struct Node*temp=q->front;
    int value=temp->data;
    q->front=q->front->next;
    if (q->front==NULL){
        q->rear=NULL;}
        free(temp);
        return value;
    }
int peek(struct Queue *q){
        if (isEmpty(q)){
            printf("Queue is empty\n");
            return -1;
        }
        return q->front->data;
    }
void display (struct Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return ;
        }
    struct Node*temp=q->front;
        printf("Queue elements : ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
}
int main (){
    struct Queue q;
    initQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Front element: %d\n", peek(&q));
    display(&q);
    enqueue(&q, 40);
    display(&q);
    return 0;
}
