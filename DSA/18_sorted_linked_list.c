#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node* next;
};
typedef struct node NODE;
NODE* head, * tail;
int count = 0;

void insert(int value) {
    NODE* node, * newnode;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->value = value;
    if (!head) {
        newnode->next = NULL;
        tail = head = newnode;
        count++;
        return;
    }
    node = head;
    for (; node->next && value > node->next->value; node = node->next);
    if (value < head->value) {
        newnode->next = head;
        head = newnode;
    }
    else {
        newnode->next = node->next;
        node->next = newnode;
        if (!newnode->next)
            tail = newnode;
    }
    count++;
}

int del(int index) {
    NODE* node, * prev;
    int value = 0, indexCount = 1;
    if (index > count)
        printf("index is out of range!\n");
    else if (!head)
        printf("List is empty!");
    else {
        if (!head->next) {
            value = head->value;
            free(head);
            head = tail = NULL;
        }
        else {
            node = head;
            for (; indexCount++ < index; node = node->next)
                prev = node;
            value = node->value;
            index == 1 ? (head = node->next) : (prev->next = node->next);
            free(node);
        }
        count--;
    }
    return value;
}

void display() {
    NODE* node;
    if (!head)
        printf("\n[ Head = Empty ]     <<<");
    else {
        printf("\n[ Head = %d ]", head->value);
        if (head == tail) { return; }
        node = head->next;
        for (;node != tail; node = node->next)
            printf(" -> [ %d ]", node->value);
        printf(" -> [ Tail = %d ]", node->value);
    }
}

int main() {
    int choice = 0, value, index;
    do {
        printf("\nUse sorted linked list\n1. Add elem\n2. Delete elem at position\n3. Display linked list\n0. Exit\n--> ");
        scanf("%d", &choice);
        switch (choice) {
        case 1: printf("Enter value: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2: printf("Ener Index: ");
            scanf("%d", &index);
            printf("\tdeleted %d\n", del(index));
            break;
        case 3: display();
            break;
        case 0: break;
        default: printf("Not correct choice!     <<<");
        }
    } while (choice != 0);
    return 0;
}


/*  Output:
        [ Head = 2 ] -> [ 10 ] -> [ 20 ] -> [ 23 ] -> [ Tail = 239 ]
        Use sorted linked list
        1. Add elem
        2. Delete elem at position
        3. Display linked list
        0. Exit
        -->     */