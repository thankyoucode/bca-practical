#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node* left, * right;
};
/*     5
      / \
     /   \
    2     17
   / \   / \
  1   3 8   21   */
typedef struct node NODE;

NODE* tree_root;

int input() {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);
    return value;
}

void insert(int value, NODE* root) {
    NODE * newnode, * prev;
    newnode = (NODE*)malloc(sizeof(NODE));
    newnode->value = value;
    newnode->left = newnode->right = NULL;
    if (!tree_root) { tree_root = newnode; }
    else {
        while (root) {
            prev = root;
            if (value < root->value) { root = root->left; }
            else if (value > root->value) { root = root->right; }
            else {
                printf("this value is allrady in tree\n");
                return;
            }
        }
        if (prev->value > value) { prev->left = newnode; }
        else { prev->right = newnode; }
    }
}

void del(int value, NODE* root) {
    NODE* node, * prev, * newPrev, * nextLast;
    if (!tree_root) { printf("Tree is empty!\n"); }
    else {

        while (root) {
            newPrev = root;
            printf("prev_value: %d\n", prev->value);
            // try to find that node there node->value == value 
            if (value < root->value) { root = root->left; }
            else if (value > root->value) { root = root->right; }
            // value is mach
            else {
                node = root;
                if (node == tree_root) {
                    // if tree_root left side having element
                    if (root->left) {
                        root = root->left;
                        tree_root = root;
                        for (nextLast = root; nextLast->right; nextLast = nextLast->right);
                        nextLast->right = node->right;
                    }
                    // tree_root left is Null then
                    else { tree_root = node->right; }
                }
                else if (prev->value > value) {
                    // if root right is not null then set root left as roots
                    if (root->right) {
                        root = root->right;
                        prev->right = root;
                        // set right of node as root(now root is root->left)
                        for (nextLast = root; nextLast->left; nextLast = nextLast->left);
                        nextLast->left = node->left;
                    }
                    // else if root is null then set root right as root
                    else { prev->left = node->left; }
                }
                else {
                    if (root->left) {
                        root = root->left;

                        prev->right = root;
                        for (nextLast = root; nextLast->right; nextLast = nextLast->right);
                        nextLast->right = node->right;
                    }
                    else { prev->right = node->right; }
                }

                free(node);
                return;
            }
            prev = newPrev;
        }
        printf("value is not in tree\n");
    }
}

void search(int value, NODE* root) {
    while (root) {
        if (value < root->value) { root = root->left; }
        else if (value > root->value) { root = root->right; }
        else {
            printf("value is present - [ Yes ])\n");
            return;
        }
    }
    printf("value is absend - [ No ]\n");
}

void preOrder(NODE* root) {
    if (root) {
        printf("%d\t", root->value);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(NODE* root) {
    if (root) {
        inOrder(root->left);
        printf("%d\t", root->value);
        inOrder(root->right);
    }
}

void postOrder(NODE* root) {
    if (root) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t", root->value);
    }
}

void display(NODE* root) {
    int choice = 0;
    printf("\n\t1. preOrder\n\t2. inOrder\n\t3. postOrder\n\t--> ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: preOrder(root);
        break;
    case 2: inOrder(root);
        break;
    case 3: postOrder(root);
        break;
    default: printf("Not correct choice!\n");
    }
}

int main() {
    NODE* root;
    int choice = 0, value;
    insert(25, tree_root);
    insert(10, tree_root);
    insert(30, tree_root);
    insert(27, tree_root);
    insert(80, tree_root);
    preOrder(tree_root);
    do {
        root = tree_root;
        printf("\nUse binary tree\n1. Add elem\n2. Delete elem as value\n3. Search value\n4. Display binary tree\n0. Exit\n--> ");
        scanf("%d", &choice);
        switch (choice) {
        case 1: insert(input(), tree_root);
            break;
        case 2: del(input(), tree_root);
            break;
        case 3: search(input(), tree_root);
            break;
        case 4: display(tree_root);
            break;
        case 0: break;
        default: printf("Not correct choice!\n");
        }
    } while (choice != 0);
    return 0;
}


/*  output:
        Use binary tree
        1. Add elem
        2. Delete elem as value
        3. Display binary tree
        0. Exit
        --> 3

                1. preOrder
                2. inOrder
                3. postOrder
                --> 1
        5       2       6       20      34  */