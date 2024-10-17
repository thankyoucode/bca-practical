class Vim {
  public Vim() {
    System.out.println("""
                       VIM - Vi IMproved

                            version 9.1
                     by Bram Moolenaar et al.
            Vim is open source and freely distributable
        """);
  }

  public Vim(String file_name) {
    filename = file_name;
    System.out.printf("""
        opend: %s
        --NORMAL--
                """, file_name);
  }

  String filename;
}

public class OpenVimFull {
  public static void main(String[] args) {
    Vim terminal = new Vim("PlayMusic.py");
  }
}
