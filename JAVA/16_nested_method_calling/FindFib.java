public class FindFib {
  static long fib(int i) {
    if (i <= 2) {
      return 1;
    }
    return fib(i - 1) + fib(i - 2);
  }

  public static void main(String[] args) {
    System.out.println(fib(10));
  }
}
