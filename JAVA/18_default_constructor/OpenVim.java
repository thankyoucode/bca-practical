class Vim {
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
}

public class OpenVim {
  public static void main(String[] args) {
    new Vim();
  }
}
