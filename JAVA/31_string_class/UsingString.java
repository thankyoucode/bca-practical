public class UsingString {
  public static void main(String[] args) {
    String text = "Hello world!";
    text.contains("world");
    System.out.println("Uppercase: " + text.toUpperCase());

    String rev_text = new StringBuilder(text).reverse().toString();
    System.out.println("Reversed: " + rev_text);

    int vowels_count = text.replaceAll("[^aeiouAEIOU]", "").length();
    System.out.println("Number of vowels: " + vowels_count);

    System.out.println("Contains: 'world': " + text.contains("world"));
  }
}