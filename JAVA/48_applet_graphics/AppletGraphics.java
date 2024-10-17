import java.applet.Applet;
import java.awt.*;

class FunApplet extends Applet {
  public void paint(Graphics g) {
    g.setColor(Color.orange);
    g.fillOval(100, 100, 200, 200);
    g.setColor(Color.BLACK);
    g.drawString("ThankYouCode", 50, 50);
    g.drawLine(20, 30, 20, 500);
    g.fillOval(156, 150, 25, 25); // left Eyes
    g.fillOval(219, 150, 25, 25); // right Eyes
    g.fillArc(162, 225, 75, 50, 180, 180); // mouth
    g.setColor(Color.RED);
    g.fillArc(182, 233, 35, 37, 180, 180); // tang
    g.setColor(Color.BLUE);
    g.fillRect(80, 350, 120, 50);
    g.drawRect(200, 350, 120, 50);
  }
}

public class AppletGraphics {
  public static void main(String[] args) {
    MyAppletViewer.run(new FunApplet());
  }
}