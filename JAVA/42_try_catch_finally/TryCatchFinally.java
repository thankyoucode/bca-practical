public class TryCatchFinally {
  public static void main(String[] args) {
    int[] numbers = { 1, 2, 3, 4, 5 };
    try {
      System.out.println(numbers[10]);
    } catch (ArrayIndexOutOfBoundsException e) {
      System.err.println(e);
    } finally {
      System.out.println("Ok thanks to use numbers array");
    }
  }
}

// java.lang.ArrayIndexOutOfBoundsException: Index 10 out of bounds for length 5
// Ok thanks to use numbers array
