public class TryCatch {
  public static void main(String[] args) {
    for (int i = 5; i > -3; i--) {
      try {
        System.out.println(2 / i);
      } catch (ArithmeticException e) {
        System.err.println("Zero division error");
      }
    }
  }
}

/*
 * 0
 * 0
 * 1
 * 2
 * Zero division error
 * -2
 * -1
 */