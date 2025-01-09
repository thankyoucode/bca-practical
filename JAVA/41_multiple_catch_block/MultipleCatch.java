class Calc {
  public static double div(double[] nums) {
    double ans = 1;
    try {
      for (int i = 0; i < 5; i++) {
        ans = ans / nums[i];
      }
      return ans;
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("At list 5 number in array");
    } catch (Exception e) {
      System.out.println(e);
    }
    return 0;
  }
}

public class MultipleCatch {
  public static void main(String[] args) {
    double[] nums = new double[] { 10, 5, 11, 23 };
    System.out.println(Calc.div(nums));
  }
}
