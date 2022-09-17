#include <stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack * ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow!\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("%d is pushed into the stack\n", val);
    }
}

int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow!\n");
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack * s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top=-1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);

    printf("Popped element is %d\n", pop(s));
    printf("Popped element is %d\n", pop(s));
    printf("Popped element is %d\n", pop(s));
    printf("Popped element is %d\n", pop(s));
    printf("Popped element is %d\n", pop(s));
    return 0;
}