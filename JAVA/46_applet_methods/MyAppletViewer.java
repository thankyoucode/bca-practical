import javax.swing.JFrame;
import java.applet.Applet;

class MyAppletViewer {
  public static void run(Applet applet) {
    JFrame frame = new JFrame("Applet in JFrame with ThankYouCode");
    applet.init();
    applet.start();
    frame.add(applet);
    frame.setSize(500, 300);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setVisible(true);
  }
}