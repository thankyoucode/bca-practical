class Computer {
    public void start() {
        System.out.println("Welcome...");
    }

    public void close() {
        System.out.println("Shutdown...");
    }
}

class SimpleComputer extends Computer {
    public void openMSOffice() {
        System.out.println("Manually open Microsoft Office");
    }
}

class ProgrammerComputer extends Computer {
    public void openVSCode() {
        System.out.println("code");
    }
}

public class TreeInheritance {
    public static void main(String[] args) {
        ProgrammerComputer myComputer = new ProgrammerComputer();
        myComputer.openVSCode();
    }
}

/*
 */