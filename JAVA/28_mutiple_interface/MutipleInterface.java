interface Swimmable {
  void swim();
}

interface Flyable {
  void fly();
}

class Bird implements Swimmable, Flyable {
  @Override
  public void swim() {
    System.out.println("Bird is swimming.");
  }

  @Override
  public void fly() {
    System.out.println("Bird is flying.");
  }
}

public class MutipleInterface {
  public static void main(String[] args) {
    Bird magic_bird = new Bird();
    magic_bird.fly();
    magic_bird.swim();
  }
}

/*
 * Bird is flying.
 * Bird is swimming.
 */