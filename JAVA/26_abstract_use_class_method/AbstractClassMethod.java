abstract class Email {
  String email = "hello@gmail.com", pass = "hellosendme", msg;

  public abstract void send(String toEmail, String pass, String msg);
}

class GoogelEmail extends Email {
  @Override
  public void send(String toEmail, String pass, String msg) {
    if (this.pass == pass) {
      System.out.printf("From: %s\nTo: %s\n\t%s", email, toEmail, msg);
    }
  }
}

public class AbstractClassMethod {
  public static void main(String[] args) {
    GoogelEmail useGoogelEmail = new GoogelEmail();
    useGoogelEmail.send("world@gmail.com", "hellosendme", "Hello world");
  }
}

/*
 * From: hello@gmail.com
 * To: world@gmail.com
 * ....Hello world
 */