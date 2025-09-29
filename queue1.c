#include <stdio.h>
#include <stdlib.h>
#define Max 100
struct Queue {
    int arr[Max];
    int front;
    int rear;
};
void initQueue(struct Queue *q){
    q->front=0;
    q->rear=-1;
}
int isEmpty(struct Queue *q){
    return q->front>q->rear;
}
int isFull(struct Queue *q){
    return q->rear==Max-1;
}
void enqueue(struct Queue *q,int value){
    if (isFull(q)){
        printf("the queue is empty cannot insert !");
        return ;
    }
    q->rear++;
    q->arr[q->rear]=value;
}
int dequeue(struct Queue *q){
    if (isEmpty(q)){
        printf("its empty man");
        return -1;
    }
    int value=q->arr[q->front];
    q->front++;
    return value;
}
int peek(struct Queue *q){
    if (isEmpty(q)){
        printf("its empty man ");
        return -1;
    }
    return q->arr[q->front];
}
void display(struct Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty!\n");
            return ;
    }
    printf("Queue element: ");
    for (int i=q->front;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
    printf("\n");
}
int main (){
    struct Queue q;
    initQueue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(&q);
    printf("dequeued : %d",dequeue(&q));
    printf("element at front : %d",peek(&q));
return 0;
}
