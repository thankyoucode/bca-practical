import java.util.Scanner;

public class SumEquation {
  static float sumOfEquation(int n) {
    float sum = 0, i = 1;
    while (i <= n) {
      sum += 1 / i++;
    }
    return sum;
  }

  public static void main(String[] args) {
    System.out.println(sumOfEquation(1000));

    var input = new Scanner(System.in);
    System.out.print("Enter n'th number: ");
    System.out.println(sumOfEquation(input.nextInt()));
    input.close();
  }
}

/*
 * 7.4854784
 * Enter n'th number: 7777777
 * 15.403683
 */