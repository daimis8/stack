#include "stack.h"

int main() {
    Stack stack;

    createStack(&stack);
    if(isEmpty(&stack)) {
        printf("Stacka'as yra tuščias\n");
    }
    push(&stack, 10);
    push(&stack, 9);
    push(&stack, 8);
    push(&stack, 7);
    push(&stack, 6);
    push(&stack, 5);
    count(&stack);
    printStack(&stack);

    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    count(&stack);
    printStack(&stack);


    destroyStack(&stack);
    printStack(&stack);


    return 0;
}