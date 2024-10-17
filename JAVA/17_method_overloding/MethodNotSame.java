class InfoPrinter {
  public void printInfo(String name) {
    System.out.println("Name: " + name);
  }

  public void printInfo(String name, String address) {
    printInfo(name);
    System.out.println("Address: " + address);
  }

  public void printInfo(String name, String address, String phone) {
    printInfo(name, address);
    System.out.println("Phone no.: " + phone);
  }
}

public class MethodNotSame {
  public static void main(String[] args) {
    InfoPrinter my_info = new InfoPrinter();
    my_info.printInfo("Computer Programmer", "127.0.0.1", "1111111111");
  }
}

/*
 * Name: Computer Programmer
 * Address: 127.0.0.1
 * Phone no.: 1111111111
 */