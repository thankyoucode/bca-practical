import java.util.Vector;

public class UsingVector {
  public static void main(String[] args) {
    Vector<Integer> numbers = new Vector<>();

    numbers.add(10); // add element
    numbers.add(20);

    numbers.add(1, 15); // add at index 1

    System.out.println("Vector: " + numbers);

    System.out.println("Element at index 2: " + numbers.get(2));

    System.out.println("Removed element: " + numbers.remove(0));

    System.out.println("Size after removal: " + numbers.size());

    System.out.println("Now Vector: " + numbers);
  }
}
