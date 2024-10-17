public class SortThis {
  static void bubbleSort(int[] arr) {
    int n = arr.length;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          swap(arr, j, j + 1);
        }
      }
    }
  }

  static void printArray(int[] arr) {
    System.out.println();
    for (int n : arr) {
      System.out.print(n + " ");
    }
  }

  static void swap(int[] arr, int a, int b) {
    arr[a] ^= arr[b];
    arr[b] ^= arr[a];
    arr[a] ^= arr[b];
  }

  static void quickSort(int[] arr) {
    int len = arr.length;
    int i = 0, j = len - 1, jmin, imax, k;
    while (i < j) {
      imax = i;
      jmin = j;
      // find max right to left
      for (k = imax; k < j; k++) {
        if (arr[k] > arr[imax]) {
          imax = k;
        }
      }

      if (arr[j] < arr[imax]) {
        swap(arr, j, imax);
      }
      // find min from left to right
      for (k = jmin; k > i; k--) {
        if (arr[k] < arr[jmin]) {
          jmin = k;
        }
      }

      if (arr[i] > arr[jmin]) {
        swap(arr, i, jmin);
      }
      i++;
      j--;
    }
  }

  public static void main(String[] args) {
    int[] arr = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    // bubbleSort(arr);
    quickSort(arr);
    printArray(arr);
  }
}

/*
 * 1 2 3 4 5 6 7 8 9 10
 * 
 * 
 * -- how it sort --
 * 1 9 8 7 6 5 4 3 2 10
 * 1 2 8 7 6 5 4 3 9 10
 * 1 2 3 7 6 5 4 8 9 10
 * 1 2 3 4 6 5 7 8 9 10
 * 1 2 3 4 5 6 7 8 9 10
 */