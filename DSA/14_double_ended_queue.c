#include<stdio.h>
#define MAX 10

int queue[MAX], left = MAX, right = 0;

int delright() {
    if (left == MAX && right == 0) {
        printf("Queue is Underflow!\n");
        return 0;
    }
    else if (right == 0) {
        printf("right side is empty!");
        return 0;
    }
    return queue[--right];
}

int delleft() {
    if (left == MAX && right == 0) {
        printf("Queue is Underflow!\n");
        return 0;
    }
    else if (left == MAX) {
        printf("left side is empty!");
        return 0;
    }
    return queue[left++];
}


void addright(int value) {
    if (right == left)
        printf("Queue is Overflow!");
    else
        queue[right++] = value;
}
void addleft(int value) {
    if (right == left)
        printf("Queue is Overflow!");
    else
        queue[--left] = value;
}

void display() {
    // printf("queue array--> ");
    // for (int i = 0; i < MAX; i++) {
    //     printf("%d\t", queue[i]);
    // }

    if (left == MAX && right == 0)
        printf("| Empty| \t");
    else {
        printf("\n| Left |\t");
        for (int i = left; i < MAX; i++)
            printf("l-%d\t", queue[i]);
        for (int i = 0; i < right; i++)
            printf("r-%d\t", queue[i]);
        printf("| right |\n");
    }
}

void main() {
    int choice = 0, value;
    do {
        printf("\nUse Double Ended queue\n1. Add elem right\n2. Add elem left\n3. Delete elem right\n4. Delete elem left\n5. Display queue\n0. Exit\n--> ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: printf("Enter value: ");
            scanf("%d", &value);
            addright(value);
            break;
        case 2: printf("Enter value: ");
            scanf("%d", &value);
            addleft(value);
            break;
        case 3:printf("deleted %d", delright());
            break;
        case 4:printf("deleted %d", delleft());
            break;
        case 5:display();
            break;
        case 0:printf("Thanks for useing Double ended queue\n");
            break;
        default:printf("Not correct choice!\n");
        }
    } while (choice != 0);
}


/*  output:
        Use Double Ended queue
        1. Add elem right
        2. Add elem left
        3. Delete elem right
        4. Delete elem left
        5. Display queue
        0. Exit
        --> 5
        | Left |        r-37    r-64    r-39    r-29    r-18    r-999   | right |    */