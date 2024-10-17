public class ContinueMe {

  static void printInRange(int s, int n, int gap) {
    while (true) {
      if (n > s) {
        System.out.println(s);
        s += gap;
        continue;
      }
      return;
    }
  }

  public static void main(String[] args) {
    printInRange(30, 100, 10);
  }
}

/*
 * 30
 * 40
 * 50
 * 60
 * 70
 * 80
 * 90
 */