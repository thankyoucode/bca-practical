import java.util.Scanner;

public class LargeFromTwo {
  static double max(double a, double b) {
    return a > b ? a : b;
  }

  public static void main(String[] args) {
    System.out.println(max(120, 20 / 0.1));
    Scanner input = new Scanner(System.in);
    System.out.print("Enter a and b [a b]: ");
    double a = input.nextDouble();
    double b = input.nextDouble();
    System.out.print("Max: " + max(a, b));
    input.close();
  }
}

/*
 * 200.0
 * Enter a and b [a b]: 20.21 20.22
 * Max: 20.22
 */