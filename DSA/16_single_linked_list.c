/*
    Hi, I am Kishan
        in this program we created Single_linked_list without duplication


    some varibles

    *next       - is represent the next node

    *delnode    - node is use for free node space in memmory
    *head       - node known as first node
    *tail       - tail known as last node
    *node       - is travling node which use for switching node to next node
    count       - here count is lenth of linked list
    index       - for store position
    value       - contain insert value and delete value
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int value;
    struct node* next;
};

typedef struct node NODE;

NODE* head, * tail;
int count = 0;
bool allRight;

int getValue(char inputChoice[5]) {
    int value;

    printf("Enter %s: ", inputChoice);
    scanf("%d", &value);

    return value;
}

// find (index - 1) node from linked list
NODE* findIndexNode(int index) {
    NODE* node;
    int indexCount = 0;

    node = head;
    indexCount++;

    while (indexCount < index - 1) {
        node = node->next;
        indexCount++;
    }

    return node;
}

void addright(NODE* newnode) {
    tail->next = newnode;
    tail = tail->next;
}

void addleft(NODE* newnode) {
    newnode->next = head;
    head = newnode;
}

void addmid(NODE* newnode, int index) {
    NODE* node;

    if (index > count) {
        printf("📢 index is out of range!\n");
        allRight = false;
    }
    else if (index == 1) {
        addleft(newnode);
    }
    else {
        node = findIndexNode(index);

        newnode->next = node->next;
        node->next = newnode;
    }
}


int delright() {
    NODE* node;
    int value;

    node = head;

    while (node->next->next)
        node = node->next;

    value = node->next->value;
    free(node->next);
    node->next = NULL;
    tail = node;

    return value;
}

int delleft() {
    NODE* node;
    int value;

    node = head;
    value = head->value;
    head = head->next;

    free(node);
    return value;
}

int delmid(int index) {
    NODE* node, * delnode;
    int value;

    if (index > count) {
        printf("📢 index is out of range!\n");
        allRight = false;
        return 0;
    }
    else if (index == 1)
        return delleft();
    else if (index == count)
        return delright();

    node = findIndexNode(index);

    delnode = node->next;
    node->next = node->next->next;
    value = delnode->value;

    free(delnode);
    return value;
}


void add(int choice) {
    NODE* newnode;
    int value;
    allRight = true;

    value = getValue("Value");

    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->value = value;
    newnode->next = NULL;

    if (!head) {
        head = tail = newnode;
    }
    else {
        switch (choice) {
        case 1:
        addright(newnode);
        break;
        case 2:
        addleft(newnode);
        break;
        case 3:
        addmid(newnode, getValue("Index"));
        break;
        }
    }
    if (allRight) { count++; }
}

int del(int choice) {
    int value = 0;
    allRight = true;

    if (!head) {
        printf("📢 List is empty!\n");
        return 0;
    }
    else if (!head->next) {
        value = head->value;
        free(head);
        head = tail = NULL;
    }
    else {
        switch (choice) {
        case 4:
        value = delright();
        break;
        case 5:
        value = delleft();
        break;
        case 6:
        value = delmid(getValue("Index"));
        break;
        }
    }

    if (allRight) { count--; }
    return value;
}


void display() {
    NODE* node;

    // if head is NULL then print empty
    if (!head) {
        printf("\n[ Head = Empty ]     <<<");
    }

    // else print the entire list in good looking format
    else {
        node = head;

        printf("\n[ Head = %d ]", node->value);

        if (!head->next) { return; }

        node = node->next;

        while (node->next) {
            printf(" -> [ %d ]", node->value);
            node = node->next;
        }

        printf(" -> [ Tail = %d ]", node->value);
    }

}


int main() {
    int choice;
    // Welcome art
    printf(" ,,.,,\n`/'`'\\`\n|     |\n(~[@-@]\t\tWelcome to Single linked list Data Structure\n \\  -/ \n / \\/\\      ,_________\n|  . '\\     ||Welcome|\n|\\]    |]   ||_______|\n`--______  .--_| |_\n         ``               \n\n");

    do {
        printf("\nUse Single linked list\n1. Add elem right\n2. Add elem left\n3. Add elem mid\n4. Delete elem right\n5. Delete elem left\n6. Delete elem mid\n7. Display linked list\n0. Exit\n--> ");
        scanf("%d", &choice);

        if (choice < 4 && choice != 0)
            add(choice);
        else if (choice < 7 && choice != 0)
            printf("📢 Deleted %d\n", del(choice));
        else {
            switch (choice) {
            case 7:
            display();
            break;
            case 0:
            exit(0);
            default:
            printf("📢 Not correct choice!\n");
            }
        }
    } while (choice != 0)
        return 0;
}