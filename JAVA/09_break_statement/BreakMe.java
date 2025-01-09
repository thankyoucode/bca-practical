public class BreakMe {

  static void printInRange(int s, int n) {
    while (true) {
      if (n <= s) {
        break;
      }
      System.out.println(s++);
    }
  }

  public static void main(String[] args) {
    printInRange(3, 10);
  }
}

/*
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 */