class SumThread extends Thread {
  private final int a, z;

  public SumThread(int a, int z) {
    this.a = a;
    this.z = z;
  }

  @Override
  public void run() {
    long result = sum(a, z);
    System.out.println(result);
  }

  private static long sum(int a, int z) {
    long sum = 0;
    for (int i = a; i <= z; i++) {
      sum += i;
    }
    return sum;
  }
}

public class MultiThreads {
  public static void main(String[] args) {
    Thread thread1 = new SumThread(1, 100);
    Thread thread2 = new SumThread(101, 200);
    Thread thread3 = new SumThread(201, 300);
    thread1.start();
    thread2.start();
    thread3.start();
  }
}
