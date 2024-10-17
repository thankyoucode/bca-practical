class Game {
    protected int level = 0;

    public void play() {
        System.out.println("play game level " + level);
    }
}

class GameLevel1 extends Game {
    public GameLevel1() {
        level++;
    }
}

class GameLevel2 extends GameLevel1 {
    public GameLevel2() {
        level++;
    }
}

public class MultilevelInheritance {
    public static void main(String[] args) {
        GameLevel2 minecraft = new GameLevel2();
        minecraft.play();
    }
}

/*
 * play game level 2
 */