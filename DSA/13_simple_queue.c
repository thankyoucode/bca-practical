#include<stdio.h>
#define MAX 5

int queue[MAX], left = 0, right = 0;

int add(int value) {
    if (right == MAX)
        printf("queue is full!\n");
    else
        queue[right++] = value;
}
int del() {
    int delValue;
    if (right == 0)
        printf("queue is empty!\n");
    else if (left + 1 == right) {
        delValue = queue[left];
        right = left = 0;
        return delValue;
    }
    else
        return queue[left++];
}
void display() {
    if (right == 0)
        printf("| Empty |\t");
    else {
        printf("\n| Left |\t");
        for (int i = left; i < right; i++)
            printf("%d\t", queue[i]);
        printf("| right |");
    }
}

void main() {
    int choise = 0, value;
    do {
        printf("\nUse simple queue\n1. Add elem\n2. Delete elem\n3. Display queue\n0. Exit\n--> ");
        scanf("%d", &choise);
        switch (choise) {
        case 1: printf("Enter value: ");
            scanf("%d", &value);
            add(value);
            break;
        case 2: printf("deleted %d", del());
            break;
        case 3: display();
            break;
        case 0: printf("Thanks for using simple queue\n");
            break;
        default: printf("Not correct choise!\n");
        }
    } while (choise != 0);
}

/*  output:
        Use simple queue
        1. Add elem
        2. Delete elem
        3. Display queue
        0. Exit
        --> 0
        Thanks for using simple queue   */