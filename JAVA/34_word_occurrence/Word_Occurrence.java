import java.util.Scanner;

public class Word_Occurrence {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    System.out.println("Enter the text: ");
    String text = input.nextLine();

    System.out.println("Enter the word to count: ");
    String word = input.nextLine();

    int count = (text.length() - text.replace(word, "").length()) / word.length();

    System.out.println("The word '" + word + "' occurs " + count + " times");

    input.close();
  }
}
