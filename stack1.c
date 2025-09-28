#include <stdio.h>
#include <stdlib.h>
struct Stack{
        int top,cap;
        int *a;
};
struct Stack* createStack(int cap){
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    if (!stack){
        fprintf(stderr,"failed to allocate stack control block\n");
        return NULL;
    }
    stack->cap=cap;
    stack->top=-1;
    stack->a=NULL;
    if (cap>0){
        stack->a=malloc(cap*sizeof*stack->a);
        if (!stack->a){
            fprintf(stderr,"failed to allocate stack backing array\n");
            free(stack);
            return NULL;
        }
    }
    return stack;
}
void deleteStack(struct Stack* stack){
    if (!stack) return;
    free(stack->a);
    free(stack);
}
int isFull(struct Stack* stack){
    return stack->top >= stack->cap-1;
}
int isEmpty(struct Stack* stack){
    return stack->top<0;
}
int push(struct Stack* stack,int x){
    if (isFull(stack)){
        printf("Stack overflow\n");
        return 0;
    }
    stack->a[++stack->top]=x;
    return 1;
}
int pop(struct Stack* stack){
    if (isEmpty(stack)){
        printf("stack underflow\n");
        return 0;
    }
    return stack->a[stack->top--];
}
int peek(struct Stack*stack){
    if (!isEmpty(stack)){
        printf("Stack is empty\n");
        return 0;
    }
    return stack->a[stack->top];
}
int main (){
struct Stack*s=createStack(5);
push(s,10);
push(s,20);
push(s,30);
    printf("%d popped from stack\n",pop(s));
    printf("top element is %d\n",peek(s));
    printf("top element in stack: ");
    while(!isEmpty(s)){
        printf("%d  ",peek(s));
        pop(s);
    }
    deleteStack(s);
return 0;
}
