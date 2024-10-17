// 03. Write a c program for sorting using bubble sort method.

#include<stdio.h>
#define N 5

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int num[N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                swap(&num[j], &num[j + 1]);
            }
        }
    }
}

void displayNum(int num[N]) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%d\t", num[i]);
    }
    printf("\n");
}


int main() {
    int numbers[N], i;

    for (i = 0; i < N; i++) {
        printf("Enter number %d", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Unsorted array: ");
    displayNum(numbers);

    bubble_sort(numbers);

    printf("Sorted Numbers: ");

    displayNum(numbers);

    return 0;
}


/*  output:
        Enter a number: 38
        Enter a number: 12
        Enter a number: 39
        Enter a number: 57
        Enter a number: 75

        Sorted Numbers: 12      38      39      57      75      */