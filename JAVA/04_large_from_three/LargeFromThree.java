import java.util.Scanner;

public class LargeFromThree {
  static double max(double a, double b, double c) {
    return Math.max(Math.max(a, b), c);
  }

  public static void main(String[] args) {
    System.out.println(max(120, -120, 20 / 0.1));
    Scanner input = new Scanner(System.in);
    System.out.print("Enter [a b c]: ");
    double a = input.nextDouble();
    double b = input.nextDouble();
    double c = input.nextDouble();
    System.out.print("Max: " + max(a, b, c));
    input.close();
  }
}

/*
 * 200.0
 * Enter a and b [a b]: 3.14 3.120 3.10
 * Max: 3.14
 */