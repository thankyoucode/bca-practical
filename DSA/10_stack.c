#include<stdio.h>
#define N 10

int stack[N], top = 0;

void display() {
    int i;
    for (i = top - 1; i >= 0; i--)
        printf("|_%3d_|\n", stack[i]);
    if (top == 0)
        printf("Stack is empty!\n");
}

void add(int value) {
    if (top >= N) {
        printf("stack is full!\n");
        return;
    }
    stack[top++] = value;
}

int delete() {
    if (top == 0) {
        printf("stack is empty!\n");
        return 0;
    }
    return stack[--top];
}

int main() {
    int choice = 0, value;

    do {
        printf("\nWelcome to Stack\n\t1. add element\n\t2. remove element\n\t3. Display Stack\n\t0. Exit\n\t-> ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
        printf("Enter value: ");
        scanf("%d", &value);
        add(value);
        break;
        case 2:
        printf("Deleted: %d\n", delete());
        break;
        case 3:
        display();
        break;

        default:
        break;
        }
    } while (choice != 0);
    return 0;
}