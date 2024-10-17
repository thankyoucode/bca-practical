import java.lang.System;

class ThreadUseYield extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            if (i == 2 || i == 3) {
                // normaly you can not differenciate with using yield() method
                Thread.yield();
                System.out.println("i -- " + i);
            } else {
                System.out.println("i -- " + i);
            }
        }
    }
}

class ThreadUseStop extends Thread {
    public void run() {

        for (int j = 1; j <= 5; j++) {
            if (j == 2) {
                // Not recomend to use stop() method in thread : for stoping use another way
                // stop();
                return;
            }
            System.out.println("j -- " + j);
        }
    }
}

class ThreadUseSleep extends Thread {
    public void run() {
        for (int k = 1; k <= 5; k++) {
            if (k == 2) {
                try {
                    sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("k -- " + k);
        }
    }
}

public class ThreadControl {
    public static void main(String[] args) {
        ThreadUseYield useYield = new ThreadUseYield();
        ThreadUseStop useStop = new ThreadUseStop();
        ThreadUseSleep useSleep = new ThreadUseSleep();

        useYield.start();
        useStop.start();
        useSleep.start();
    }
}
