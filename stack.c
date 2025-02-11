#include "stack.h"

void createStack(Stack *stack) {
    if (stack -> top == -1) {
        printf("Stack'as jau yra sukurtas");
        return;
    }
    stack->top = -1;
    stack->created = true;
    stack -> count = 0;
};

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1; 
}

void push(Stack *stack, int value) {
    if(isFull(stack)) {
        printf("Stack'as yra pilnas\n");
        return;
    } 
    else if(stack->created == false) {
        printf("Stack'as nėra sukurtas\n");
        return;
    }
    else {
        stack -> arr[++stack -> top] = value;
        stack -> count++;
    }
}

int pop(Stack *stack) {
    if(stack->top == -1) {
        printf("Stack'as nėra sukurtas\n");
        return -1;
    }
    else if (isEmpty(stack)) {
        printf("Stack'as yra tuščias\n");
        return -1;
    }
    else {
        int popElement = stack->arr[stack -> top];
        stack -> top--;
        stack -> count -= 1;
        return popElement;
    }
}

void printStack(Stack *stack) {
    if(stack->created == false) {
        printf("Stack'as nėra sukurtas\n");
        return;
    }
    else if(isEmpty(stack)) {
        printf("Stack'as yra tuščias\n");
        return;
    }
    else {
        for(int i = stack -> top; i >= 0; i--) {
            printf("%d", stack -> arr[i]);
        }
        printf("\n");
    }
}

void destroyStack(Stack *stack) {
    if(stack->created == false) {
        printf("Stack'as nėra sukurtas, nėra ką trinti\n");
        return;
    }
    else {
        while(!isEmpty(stack)) {
            pop(stack);
        }
        stack -> created = false;
    }
}

void count(Stack *stack) {
    if(stack -> created ==false) {
        printf("Stack'as nėra sukurtas");
        return;
    }
    printf("Stacko dydis yra: %d\n", stack -> count);
}