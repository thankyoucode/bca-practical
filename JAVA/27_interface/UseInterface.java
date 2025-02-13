interface Shape {
  void draw(); // Abstract method
}

class Circle implements Shape {
  @Override
  public void draw() {
    System.out.println("Drawing a Circle");
  }
}

public class UseInterface {
  public static void main(String[] args) {
    Circle newCircle = new Circle();
    newCircle.draw();
  }
}