import java.util.Scanner;

class Game {
  public Game() {
    start();
  }

  public void start() {
    System.out.println("Let start your name game");
    play();
  }

  String reverseString(String name) {
    int len = name.length();
    char[] namechar = name.toCharArray();

    name = "";
    while (len > 0) {
      name += namechar[--len];
    }
    return name;
  }

  void play() {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter your name: ");
    String name = input.next();
    System.out.print("Enter your reverse name: ");
    String reverseName = input.next();
    input.close();
    end(reverseString(name).compareTo(reverseName));
  }

  void end(int isWin) {
    if (isWin == 0) {
      System.out.println("You win this game ***");
    } else {
      System.out.println("You loose this game!");
    }
  }
}

public class SiblingCall {
  public static void main(String[] args) {
    new Game();
  }
}
