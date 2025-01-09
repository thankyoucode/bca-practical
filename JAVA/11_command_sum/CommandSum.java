public class CommandSum {

  public static void main(String[] args) {
    System.out.println("Number of arguments are: " + args.length);
    double total = 0;
    for (String arg : args) {
      System.out.println(arg);
      total += Double.parseDouble(arg);
    }
    System.out.println("Total: " + total);
  }
}

/*
 * 11_command_sum $ javac CommandSum.java
 * 11_command_sum $ java CommandSum 10.5 20.3 15.2
 * Number of arguments are: 3
 * 10.5
 * 20.3
 * 15.2
 * Total: 46.0
 */