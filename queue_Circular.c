#include <stdio.h>
#include <stdlib.h>
#define Max 5
struct Queue{
    int arr[5];
    int rear;
    int front;
};
void Queueinit(struct Queue *q){
    q->front=-1;
    q->rear=-1;
}
int isEmpty(struct Queue *q){
    return (q->front==-1);
}
int isFull(struct Queue *q){
    return ((q->rear+1)%Max==q->front);
}
void enqueue(struct Queue *q,int value){
    if (isFull(q)){
        printf("cannot do it its full\n");
        return ;
    }
    if (isEmpty(q)){
        q->front=q->rear=0;
    }
    else {
        q->rear=(q->rear+1)%Max;
    }
    q->arr[q->rear]=value;
    printf("%d enqueued \n",value);
}
int dequeue(struct Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty ");
        return -1;
    }
    int value = q->arr[q->front];
    if (q->front==q->rear){
        q->front=q->rear=-1;
    }
    else {q->front=(q->front+1)%Max;}
    return value;
}
int peek(struct Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    return q->arr[q->front];
}
void display (struct Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return ;
    }
    printf("Queue elements : ");
    int i=q->front;
    while(1){
        printf("%d ",q->arr[i]);
        if (i==q->rear)break;
        i=(i+1)%Max;
    }
    printf("\n");
}
int main (){
struct Queue q;
Queueinit(&q);
enqueue(&q,10);
enqueue(&q,20);
enqueue(&q,30);
enqueue(&q,40);
display(&q);
 printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    display(&q);

    enqueue(&q, 50);
    enqueue(&q, 60);  // reused freed space

    display(&q);
return 0;
}
