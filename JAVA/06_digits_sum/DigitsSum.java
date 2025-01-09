import java.util.Scanner;

public class DigitsSum {

  static int digitSum(int number) {
    // Handle negative number
    if (number < 0) {
      number = Math.abs(number);
    }
    int sum = 0;
    while (number > 0) {
      sum += number % 10;
      number /= 10;
    }
    return sum;
  }

  public static void main(String[] args) {
    System.out.println(digitSum(123));

    var input = new Scanner(System.in);
    System.out.print("Find digit sum of: ");
    System.out.println(digitSum(input.nextInt()));
    input.close();
  }
}

/*
 * 6
 * Find digit sum of: -999
 * 27
 */