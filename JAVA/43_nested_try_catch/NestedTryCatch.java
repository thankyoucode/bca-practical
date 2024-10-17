public class NestedTryCatch {
  public static void main(String[] args) {
    int[] numbers = { 1, 2, 3, 4, 5 };
    int iValue = 0;
    try {
      for (int i = 0; i < 10; i++, iValue = numbers[i + 1]) {
        try {
          System.out.println(iValue + ", " + numbers[i]);
        } catch (ArrayIndexOutOfBoundsException e) {
          System.err.println("Array index out of bound in print");
        }
      }
    } catch (ArrayIndexOutOfBoundsException e) {
      System.err.println("Array index out of bound in iValue");
    }
  }
}

// 0, 1
// 3, 2
// 4, 3
// 5, 4
// Array index out of bound in iValue