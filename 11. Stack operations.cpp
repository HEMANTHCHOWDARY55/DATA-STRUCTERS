#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Stack {
    int items[MAX_SIZE];
    int top;
};
void initialize(struct Stack *stack) {
    stack->top = -1;
}
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++(stack->top)] = value;
}
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->items[(stack->top)--];
}
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->items[stack->top];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    printf("Top element: %d\n", peek(&stack));

    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));

    printf("Top element: %d\n", peek(&stack));

    push(&stack, 20);
    printf("Top element: %d\n", peek(&stack));

    return 0;
}
