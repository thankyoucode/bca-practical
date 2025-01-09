class ThreadUse extends Thread {
    private final char c;

    public ThreadUse(char c) {
        this.c = c;
    }

    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(c + " -- " + i);
        }
    }
}

public class ThreadPriority {
    public static void main(String[] args) {
        char[] cList = { 'i', 'j', 'k' };
        int[] cPriority = { 1, 5, 10 };

        for (int i = 0; i < cList.length; i++) {
            ThreadUse use = new ThreadUse(cList[i]);
            use.setPriority(cPriority[i]);
            use.start();
        }
    }
}

// ThreadUse usei = new ThreadUse('i');
// ThreadUse usej = new ThreadUse('j');
// ThreadUse usek = new ThreadUse('k');

// usei.setPriority(1);
// usej.setPriority(5);
// usek.setPriority(10);

// usei.start();
// usej.start();
// usek.start();