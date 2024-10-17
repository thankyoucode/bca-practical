import java.util.Scanner;
import java.util.Arrays;

public class SortString {

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    System.out.println("Enter a String: ");
    String text = input.nextLine();

    char[] text_char_list = text.toCharArray();
    Arrays.sort(text_char_list);

    String sorted_text = new String(text_char_list);

    System.out.println("Sorted string: " + sorted_text);

    input.close();
  }

}