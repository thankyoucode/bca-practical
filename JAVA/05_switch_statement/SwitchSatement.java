class GameOlimpic {
  public void gameWinner(int no, String player) {
    // Declaring Game Result 🥇🥈🥉
    String result;
    switch (no) {
      case 1:
        result = "GOlD Medal go's to";
        break;
      case 2:
        result = "SILVER Medal go's to";
        break;
      case 3:
        result = "BRONCH Medal go's to";
        break;
      default:
        result = "thank to participate";
    }
    System.out.println(result + " " + player);
  }
}

public class SwitchSatement {
  public static void main(String[] args) {
    var game = new GameOlimpic();
    System.out.println("In Game Olimpic");
    game.gameWinner(4, "Dashrath");
    game.gameWinner(3, "Kishan");
    game.gameWinner(2, "Janak");
    game.gameWinner(1, "Krunal");
  }
}

/*
 * In Game Olimpic
 * thank to participate Dashrath
 * BRONCH Medal go's to Kishan
 * SILVER Medal go's to Janak
 * GOlD Medal go's to Krunal
 */