#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int value;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;

NODE* head, * tail;
int count = 0;
bool allRight;

int getValue(char inputChoice[5]) {
    int value = 0;

    printf("Enter %s: ", inputChoice);
    scanf("%d", &value);

    return value;
}

NODE* findIndexNode(int index, int end) {
    NODE* node;
    int indexCount = 1;
    if (count / 2 > index) {   // start from head
        node = head;
        while (indexCount++ < index - 1)
            node = node->next;
    }
    else {     // start from tail
        indexCount = (count - index);
        node = tail;
        while (indexCount-- > 0)
            node = node->prev;
    }
    return node;
}

void addright(NODE* newnode) {
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void addleft(NODE* newnode) {
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void addmid(NODE* newnode, int index) {
    NODE* node;

    if (index > count) {
        printf("📢 index is out of range!\n");
        allRight = false;
    }
    else if (index == 1)
        addleft(newnode);
    else if (index == count)
        addright(newnode);
    else {
        node = findIndexNode(index, count);

        newnode->next = node;
        newnode->prev = node->prev;
        node->prev->next = newnode;
        node->prev = newnode;
    }
}

int delright() {
    int value;

    value = tail->value;
    tail = tail->prev;
    free(tail->next);
    tail->next = NULL;

    return value;
}

int delleft() {
    int value;

    value = head->value;
    head = head->next;
    free(head->prev);
    head->prev = NULL;

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
    else {
        node = findIndexNode(index, count + 1);

        value = node->value;

        // remove depandency of deleting node
        node->prev->next = node->next;
        node->next->prev = node->prev;

        free(node);
        return value;
    }
}


void add(int choice) {
    NODE* newnode;
    int value;

    allRight = true;

    value = getValue("Value");
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->value = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (!head)
        head = tail = newnode;
    else {
        switch (choice) {
        case 1:addright(newnode);
            break;
        case 2:addleft(newnode);
            break;
        case 3:addmid(newnode, getValue("Index"));
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
        case 4: value = delright();
            break;
        case 5: value = delleft();
            break;
        case 6: value = delmid(getValue("Index"));
            break;
        }
    }

    if (allRight) { count--; }
    return value;
}


void display() {
    NODE* node;

    if (!head)
        printf("\n[ Head = Empty ]     <<<");
    else {
        node = head;
        printf("\n[ Head = %d ]", node->value);

        if (!head->next) { return; }

        node = node->next;
        for (; node->next; node = node->next)
            printf(" -> [ %d ]", node->value);
        printf(" -> [ Tail = %d ]", node->value);
    }

}


int main() {
    int choice = 0;

    do {
        printf("\nUse doubly linked list\n1. Add elem right\n2. Add elem left\n3. Add elem mid\n4. Delete elem right\n5. Delete elem left\n6. Delete elem mid\n7. Display linked list\n0. Exit\n--> ");
        scanf("%d", &choice);

        if (choice < 4 && choice != 0)
            add(choice);
        else if (choice < 7 && choice != 0)
            printf("📢 Deleted %d\n", del(choice));
        else {
            switch (choice) {
            case 7: display();
                break;
            case 0: printf("Thanks for using doubly linked list\n");
                break;
            default: printf("📢 Not correct choice!\n");
            }
        }
    } while (choice != 0);
    return 0;
}



/*  Output:
        [ Head = 20 ] -> [ Tail = 30 ]
        Use doubly linked list
        1. Add elem right
        2. Add elem left
        3. Add elem mid
        4. Delete elem right
        5. Delete elem left
        6. Delete elem mid
        7. Display linked list
        0. Exit
        --> 0
        Thanks for using doubly linked list     */