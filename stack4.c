#include <stdio.h>
#include <stdlib.h>
#define Max 100
struct Stack{
    int arr[Max];
    int top;
};
void initStack(struct Stack*s){
    s->top=-1;
}
int isFull(struct Stack*s){
    return s->top==Max-1;
}
int isEmpty(struct Stack *s){
    return s->top==-1;
}
void push(struct Stack*s,int value){
    if (isFull(s)){printf("stack is full cannot ");return ;}
    s->top=s->top+1;
    s->arr[s->top]=value;
    printf("inserted");
}
int pop(struct Stack*s){
    if (isEmpty(s)){printf("cannot");return -1;}
    int data=s->arr[s->top];
    s->top--;
    return data;
}
int peek(struct Stack*s){
    if (isEmpty(s)){printf("nothings here\n");return -1;}
    return s->arr[s->top];
}
void display (struct Stack *s){
    if (isEmpty(s)){
        printf("stack is empty");
        return ;
    }
    for (int i=0;i<=s->top;i++){
        printf("%d",s->arr[i]);
    }
    printf("\n");
}
int main (){
  struct Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    display(&s);

    printf("Top element: %d\n", peek(&s));

    printf("Popped: %d\n", pop(&s));
    display(&s);
}
