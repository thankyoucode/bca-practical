// We can not Inherit Printer class because of final class
final class Printer {
  public static void print() {
    System.out.println("Start to print with default settings");
  }
}

class TV {
  // Method is not Override because of final mathod
  public static final void start() {
    System.out.println("Colourful animation display on screen");
  }
}

public class FinalClassMethod {
  public static void main(String[] args) {
    Printer.print();
    TV.start();
  }
}
