#include <stdio.h>
#define N 10

// linear search logic
// run-time complaxity - Big O(n)
int linear_search(int value, int list[N]) {
    int i;
    for (i = 0; i < N; i++) {
        if (list[i] == value)
            return i;
    }
    return -1;
}

int main() {
    int number_list[N] = { 2, 5, 7, 4, 3, 9, 6, 1, 8, 17 };
    int i, value, result;

    printf("Enter your find number > ");
    scanf("%d", &value);

    for (i = 0; i < N; i++) {
        printf("%d  ", number_list[i]);
    }

    result = linear_search(value, number_list);

    if (result == -1) {
        printf("\n%d is not in this number_list", value);
    }
    else {
        printf("\nin number_list value > %d is on index > %d\n", value, result);
    }
    return 0;
}


/*  output:
    Enter your find number > 4
    2  5  7  4  3  9  6  1  8  17
    in number_list value > 4 is on index > 3    */