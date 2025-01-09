// 07. Write a c program for sorting using shell-sort method.

#include <stdio.h>
#include <math.h>
#define N 10


// run-time for 500 N is 124264
void _shell_sort(int nums[N]) {
    int i, isSorted, gap = N;

    do {
        isSorted = 1;
        gap = gap > 1 ? gap / 2 : 1;
        for (i = 0; i < N - gap; i++) {
            if (nums[i] > nums[i + gap]) {
                nums[i] = nums[i] ^ nums[i + gap];
                nums[i + gap] = nums[i] ^ nums[i + gap];
                nums[i] = nums[i] ^ nums[i + gap];
                isSorted = 0;
            }
            for (i = 0; i < N; i++) {
                printf("%d\t", nums[i]);
            }
            // some time isSorted is still true but actully the data is not sored when the gap is grater then 1 like 4, 2
            // it resolve this type of data input 
            //      - { 4 3 6 5 8 7 10 9 12 11 }
            if (gap > 1) { isSorted = 0; }
        }
    } while (!isSorted);
}

void shell_sort(int nums[N]) {
    int i, j, temp, pass, gap, swap;
    gap = N / 2;
    while (gap > 0) {
        printf("loop swap > ");
        swap = 1;
        while (swap == 1) {
            printf("loop swap > ");
            for (i = 1; i <= (N - gap); i++) {
                if (nums[i] > nums[i + gap]) {
                    nums[i] = nums[i] ^ nums[i + gap];
                    nums[i + gap] = nums[i] ^ nums[i + gap];
                    nums[i] = nums[i] ^ nums[i + gap];
                    swap = 1;
                }
            }
        }
        gap = gap / 2;
    }
}

int main() {
    int i, numbers[N];

    for (i = 0; i < N; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    shell_sort(numbers);

    printf("Sorted Numbers: \n\t");
    for (i = 0; i < N; i++)
        printf("%d\t", numbers[i]);
    return 0;
}

/* output
Enter 1 number: 551
Enter 2 number: 618
Enter 3 number: 264
Enter 4 number: 437
Enter 5 number: 398
Enter 6 number: 425
Enter 7 number: 296
Enter 8 number: 334
Enter 9 number: 573
Enter10 number: 391

Sorted Numbers:    264     296     334     391     398     425     437
    551     573     618     */

    // 4 
    // 3 
    // 6 
    // 5 
    // 8 
    // 7 
    // 10 
    // 9 
    // 12 
    // 11