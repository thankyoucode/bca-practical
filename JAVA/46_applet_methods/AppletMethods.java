import java.applet.Applet;
import java.awt.*;

class StopApplet extends Applet {
  String text;

  public void init() {
    text = "Applet: Why you are using me.";
    setBackground(Color.DARK_GRAY);
  }

  public void start() {
    System.out.println("Applet: start");
  }

  public void stop() {
    System.out.println("Applet: stop");
  }

  public void distroy() {
    System.out.println("Applet: distroy");
  }

  public void paint(Graphics g) {
    g.setColor(Color.white);
    g.drawString(text, 25, 30);
  }
}

public class AppletMethods {
  public static void main(String[] args) {
    StopApplet applet = new StopApplet();
    MyAppletViewer.run(applet);
    applet.stop(); // updating process is stop now, but you can see that applet
    applet.distroy();
  }
}