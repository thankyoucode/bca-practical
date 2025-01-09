import java.applet.Applet;
import java.awt.*;

class SorryApplet extends Applet {
  String text1, text2, text3, reporter, year;

  public SorryApplet(String reporter, String year) {
    this.reporter = reporter;
    this.year = year;
  }

  public void init() {
    text1 = "Applet: Hi I am not supported on browser";
    text2 = "They removed me because of security concern";
    text3 = "And Java it self removing me in future version. (Report by " + reporter + ", year - " + year + ")";
    setBackground(Color.DARK_GRAY);
  }

  public void paint(Graphics g) {
    g.setColor(Color.white);
    g.drawString(text1, 25, 30);
    g.drawString(text2, 25, 50);
    g.drawString(text3, 25, 80);
  }
}

public class AppletParam {
  public static void main(String[] args) {
    MyAppletViewer.run(new SorryApplet("Kishan Jat", "2024"));
  }
}