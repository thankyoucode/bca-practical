import java.util.Scanner;

public class AreaCircle {
  static long areaOfCircle(double r) {
    return (long) (Math.PI * Math.pow(r, 2));
  }

  static void withInput() {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter 'r' value of circle : ");
    double r = input.nextDouble();
    long area = areaOfCircle(r);
    System.out.println("Area of circle r = " + r + " is " + area);
    input.close();
  }

  public static void main(String[] args) {
    double[] rlist = { 10, 1200, 234.3489 };
    for (double r : rlist) {
      System.out.println(r + " : " + areaOfCircle(r));
    }

    withInput();
  }
}

/*
 * 10.0 : 314
 * 1200.0 : 4523893
 * 234.3489 : 172534
 * Enter 'r' value of circle : 1.618
 * Area of circle r = 1.618 is 8
 */