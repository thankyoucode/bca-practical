import java.applet.Applet;
import java.awt.Graphics;

class HelloApplet extends Applet {
  @Override
  public void paint(Graphics g) {
    g.drawString("Hello, Applet", 20, 20);
  }
}

public class MyApplet {
  public static void main(String[] args) {
    MyAppletViewer.run(new HelloApplet());
  }
}