// Define a Thread subclass for computing sums
class SumThread extends Thread {
    private final int a;
    private final int z;

    // Constructor
    public SumThread(int a, int z) {
        this.a = a;
        this.z = z;
    }

    // Override the run method to perform the task
    @Override
    public void run() {
        // Call the static sum method from SimpleSum class
        long result = sum(a, z);
        System.out.println(result);
    }

    // Static method to compute the sum of integers from a to z
    private static long sum(int a, int z) {
        long sum = 0;
        for (int i = a; i <= z; i++) {
            sum += i;
        }
        return sum;
    }
}

public class SimpleSum {

    public static void main(String[] args) {
        // Multi-threaded computation
        System.out.println("\nMulti-threaded sums:");

        // Create and start threads directly
        Thread thread1 = new SumThread(1, 100);
        Thread thread2 = new SumThread(1, 100);
        Thread thread3 = new SumThread(1, 100);

        thread1.start();
        thread2.start();
        thread3.start();

        // Optionally, wait for all threads to finish
        try {
            thread1.join();
            thread2.join();
            thread3.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
