class Phone {
  public String game = "Simple 2D game";

  public Phone() {
    System.out.println("It can call, SMS, play Radio, clock, time-date");
  }
}

class SmartPhone extends Phone {
  public SmartPhone() {
    System.out.println("touch and big screen, camera, play video, Talk to you and more");
    game = "High graphics game, like real world";
  }

  public void playGame() {
    System.out.println("let's play " + game);
  }
}

public class SingleInheritance {
  public static void main(String[] args) {
    SmartPhone oppo = new SmartPhone();
    oppo.playGame();
  }
}

/*
 * It can call, SMS, play Radio, clock, time-date
 * touch and big screen, camera, play video, Talk to you and more
 * let's play High graphics game, like real world
 */