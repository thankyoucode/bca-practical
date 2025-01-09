#include<stdio.h>
#define MAX 5

int queue[MAX], left = 0, right = 0;

int add(int value) {
    if ((left == 0 && right == MAX) || (right == left && right != 0)) {
        printf("queue is full!\n");
        return 0;
    }
    else if (right == MAX)
        right = 0;
    queue[right++] = value;
}
int del() {
    int delValue;
    if (right == 0 && left == 0)
        printf("queue is empty!\n");
    else if (left + 1 == right) {
        delValue = queue[left];
        right = left = 0;
        return delValue;
    }
    else if (left == MAX)
        left = 0;
    else
        return queue[left++];
}
void display() {
    if (right == 0 && left == 0)
        printf("| Empty |\t");
    else {
        printf("\n| Left |\t");
        if (left < right)
            for (int i = left; i < right; i++)
                printf("%d\t", queue[i]);
        else if (right < left) {
            for (int i = left; i < MAX; i++)
                printf("%d\t", queue[i]);
            for (int i = 0; i < right; i++)
                printf("%d\t", queue[i]);
        }
        printf("| right |");
    }
}

void main() {
    int choice = 0, value;
    do {
        printf("\nUse circular queue\n1. Add elem\n2. Delete elem\n3. Display queue\n0. Exit\n--> ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: printf("Enter value: ");
            scanf("%d", &value);
            add(value);
            break;
        case 2: printf("deleted %d", del());
            break;
        case 3: display();
            break;
        case 0: printf("Thanks for using circular queue\n");
            break;
        default: printf("Not correct choice!\n");
        }
    } while (choice != 0);
}

/*  output:
        Use circular queue
        1. Add elem
        2. Delete elem
        3. Display queue
        0. Exit
        --> 0
        Thanks for using circular queue

        --> 3

        | Left |        934     382     28      936     5278    | right |*/