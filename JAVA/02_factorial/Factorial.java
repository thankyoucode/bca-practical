import java.math.BigInteger;
import java.util.Scanner;

public class Factorial {
  // This function can find factorial of 200000 it can be more.
  static BigInteger factorialOfBig(int n) {
    BigInteger fact = BigInteger.ONE;
    for (int i = 2; i <= n; i++) {
      fact = fact.multiply(BigInteger.valueOf(i));
    }
    return fact;
  }

  static void withInput() {
    Scanner input = new Scanner(System.in);
    System.out.print("Find factorial of : ");
    int n = input.nextInt();
    BigInteger fact = factorialOfBig(n);
    System.out.print("Factorial of " + n + " is \n" + fact);
    input.close();
  }

  public static void main(String[] args) {
    System.out.println("Factorial of 5: " + factorialOfBig(5));
    withInput();
  }
}
/*
 * Factorial of 5: 120
 * Find factorial of : 120
 * Factorial of 120 is
 * 6689502913449127057588118054090372586752746333138029810295671352301633557244962989366874165271984981308157637893214090552534408589408121859898481114389650005964960521256960000000000000000000000000000
 */