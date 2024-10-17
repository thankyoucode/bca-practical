#include <stdio.h>
#define N 10

int list[N] = {13, 15, 16, 18, 19, 20, 34, 37, 39, 45};

// binary search logic
// run-time complaxity - Big O(log n)
// run-time for 500 N is - 9
int binary_search(int value, int start, int end) {
    int i, mid = (start + end) / 2;
    if(value == list[mid])
        return mid;
    else if(mid == start)
        return -1;
    else if(value < list[mid])
        return binary_search(value, start, mid);
    else
        return binary_search(value, mid, end);
}

int main() {
    int i, value, result;

    printf("Enter your find number > ");
    scanf("%d", &value);

    for(i = 0; i < N; i++)
        printf("%d  ", list[i]);

    result = binary_search(value, 0, N);
    if (result == -1) {
        printf("\n%d is not in this list", value);
        return 0;
    }
    printf("\nin list value > %d is on index > %d", value, result);
    return 0;
}

/*  output:
    Enter your find number > 37
    13  15  16  18  19  20  34  37  39  45
    in list value > 37 is on index > 7
        */