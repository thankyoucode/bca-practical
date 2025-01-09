// 03. Write a c program for sorting using straight_selection sort method.

#include<stdio.h>
#define N 10

// straight_selection_sort is same selection_sort

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void __straight_selection_sort(int nums[N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (nums[i] > nums[j]) {
                swap(&nums[i], &nums[j]);
            }
        }
    }
}


void selection_sort(int nums[N]) {
    int i, j, min_index;
    for (i = 0; i < N; i++) {
        min_index = i;
        for (j = i + 1; j < N; j++) {
            if (nums[min_index] > nums[j]) {
                min_index = j;
            }
        }
        if (nums[i] != nums[min_index]) {
            printf("%d <-> %d\n", nums[i], nums[min_index]);
            swap(&nums[i], &nums[min_index]);
        }
    }
}

int main() {
    // int numbers[N] = { 40, 30, 50, 20, 10 }, i;
    int numbers[N] = { 546, 253, 480, 316, 299, 445, 238, 134, 224, 77 }, i;

    // for (i = 0; i < N; i++) {
    //     printf("Enter %d number: ", i + 1);
    //     scanf("%d", &numbers[i]);
    // }
    for (i = 0; i < N; i++)
        printf("%d\t", numbers[i]);
    printf("\n\n");
    selection_sort(numbers);

    printf("Sorted Numbers: \n\t");
    for (i = 0; i < N; i++)
        printf("%d\t", numbers[i]);
    return 0;
}

/*  output:
        Enter 1 number: 546
        Enter 2 number: 253
        Enter 3 number: 480
        Enter 4 number: 316
        Enter 5 number: 299
        Enter 6 number: 445
        Enter 7 number: 238
        Enter 8 number: 134
        Enter 9 number: 224
        Enter 10 number: 77

        Sorted Numbers:
            77      134     224     238     253     299     316    445     480     546     */