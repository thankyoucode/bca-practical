// 08. Write a c program for sorting using merge sort method.

#include<stdio.h>
#define N 10

// run-time for 500 N is 999
int merge_sort(int nums[N], int start, int end) {
    int mid = (start + end) / 2;
    int i = start, j = mid, merge_nums[end - start], merge_index = 0;

    if (start == mid)
        return 0;

    merge_sort(nums, start, mid);
    merge_sort(nums, mid, end);

    while(i < mid && j < end) {
        if (nums[i] < nums[j])
            merge_nums[merge_index++] = nums[i++];
        else
            merge_nums[merge_index++] = nums[j++];
    }
    while(i < mid)
        merge_nums[merge_index++] = nums[i++];

    while(j < end)
        merge_nums[merge_index++] = nums[j++];

    for(i = 0; i < merge_index; i++)
        nums[start + i] = merge_nums[i];
}

int main() { 
    int numbers[N], i;

    for(i=0; i < N; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    merge_sort(numbers, 0, N);

    printf("\nSorted Numbers: ");
    for(i=0; i < N; i++)
        printf("%6d  ", numbers[i]);
    return 0;
}


/* output
Enter 1 number: 188
Enter 2 number: 485
Enter 3 number: 232
Enter 4 number: 324
Enter 5 number: 507
Enter 6 number: 33
Enter 7 number: 1
Enter 8 number: 325
Enter 9 number: 411
Enter 10 number: 603

Sorted Numbers:      1      33     188     232     324     325     411 
    485     507     603    */