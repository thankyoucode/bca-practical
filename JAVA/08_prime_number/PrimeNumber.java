import java.util.Scanner;

public class PrimeNumber {
  static boolean isPrime(int n) {
    if (n < 2) {
      return false;
    }
    for (int i = 3; i < n; i += 2) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }

  public static void main(String[] args) {
    int[] nlist = { 10, 12, 7, 91, 111, 121, 999, 11 };
    for (int n : nlist) {
      System.out.printf("%d is prime : %b\n", n, isPrime(n));
    }
    var input = new Scanner(System.in);
    System.out.print("Is prime: ");
    System.out.println(isPrime(input.nextInt()));
    input.close();
  }
}

/*
 * 10 is prime : false
 * 12 is prime : false
 * 7 is prime : true
 * 91 is prime : false
 * 111 is prime : false
 * 121 is prime : false
 * 999 is prime : false
 * 11 is prime : true
 * Is prime: 997
 * true
 */