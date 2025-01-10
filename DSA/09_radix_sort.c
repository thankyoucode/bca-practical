#include<stdio.h>
#include<math.h>
#define N 10


int max(int nums[N]) {
    int i, max = 0;
    for (i = 0; i < N; i++) {
        if (max < nums[i])
            max = nums[i];
    }
    return max;
}

int numlen(int num) {
    int len = 0;
    for (; num != 0; len++)
        num /= 10;
    return len;
}



// run-time for 500 N is ???
int radix_sort(int nums[N]) {
    // radix_nums as main data table
    int l, left, right, len = 0, last_index[10], radix_nums[10][N];
    int i, j, index, radix_index;
    l = numlen(max(nums));

    while (len++ < l) {
        // set all last_index as 0
        for (i = 0; i < 10; last_index[i++] = 0);

        left = round(pow(10, len));
        right = left == 10 ? 1 : round(left / 10);

        for (i = 0; i < N; i++) {
            // extrect a number digit as table index
            radix_index = (nums[i] - (int)((int)(nums[i] / left) * left)) / right;
            // poot that number in table position
            radix_nums[radix_index][last_index[radix_index]++] = nums[i];
        }

        // move numbers from data table to main number list
        for (i = 0, index = 0; index < N; i++) {
            for (j = 0; j < last_index[i]; j++)
                nums[index++] = radix_nums[i][j];
        }
    }
}

int main() {
    int numbers[N], i;

    for (i = 0; i < N; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    radix_sort(numbers);

    printf("\nSorted Numbers: ");
    for (i = 0; i < N; i++)
        printf("%6d  ", numbers[i]);
    return 0;
}


/* output
Enter 1 number: 331
Enter 2 number: 275
Enter 3 number: 36
Enter 4 number: 279
Enter 5 number: 353
Enter 6 number: 197
Enter 7 number: 392
Enter 8 number: 241
Enter 9 number: 551
Enter 10 number: 24

Sorted Numbers:     24      36     197     241     275     279     331
    353     392     551    */