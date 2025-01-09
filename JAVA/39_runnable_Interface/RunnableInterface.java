class MyRunnable implements Runnable {
  @Override
  public void run() {
    for (int i = 0; i < 5; i++) {
      System.out.println("hello from a separate thread! " + i);
      try {
        Thread.sleep(500);
      } catch (InterruptedException e) {
        System.out.println("Thread interrupted");
      }
    }
  }
}

public class RunnableInterface {
  public static void main(String[] args) {
    MyRunnable asyncRun = new MyRunnable();

    Thread thisThread = new Thread(asyncRun);

    thisThread.start();
  }
}