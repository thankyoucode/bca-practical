class Vim {
  public String filename;

  public Vim() {
    System.out.println("""
                       VIM - Vi IMproved

                            version 9.1
                     by Bram Moolenaar et al.
            Vim is open source and freely distributable

                   Help poor children in Uganda!
          type  :help iccf<Enter>       for information

          type  :q<Enter>               to exit
          type  :help<Enter>  or  <F1>  for on-line help
          type  :help version9<Enter>   for version info
        """);
  }

  public Vim(String file_name) {
    filename = file_name;
    System.out.printf("""
        opend: %s
        --NORMAL--
                """, file_name);
  }
}

public class OpenVimFile {
  public static void main(String[] args) {
    Vim terminal = new Vim("hello.py");
    System.out.println(terminal.filename);
  }
}

/*
 * opend: hello.py
 * --NORMAL--
 * hello.py
 */