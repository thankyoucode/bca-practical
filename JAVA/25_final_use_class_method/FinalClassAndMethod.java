class Power {
    int volt = 203;
}

final class Printer extends Power {
    public void print() {
        System.out.println("Start to print with default settings");
    }
}

// We can not Inheritance Printer class because of that is final class
// private class SelfSetPrinter extends Printer {
//     @Override
//     public void print() {
//         System.out.println("Start to print with Self set printer settings");
//     }
// }

class TV {
    public final void start() {
        System.out.println("Start starting with default Desktop");
    }
}

class AndroidTV extends TV {
    // Method is not Overrided because of that is final mathod
    // @Override
    // public void start() {
    //     System.out.println("Start starting with Android functionality Desktop");
    // }
}

public class FinalClassAndMethod {

    public static void main(String[] args) {
        System.out.println("Hello my friend");
        Printer officePrinter = new Printer();

        officePrinter.print();
    }
}
