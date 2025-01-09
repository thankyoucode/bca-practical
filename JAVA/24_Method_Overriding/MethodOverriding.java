import java.util.Scanner;

class SimpleCalc {
    public double calc(double a, double b) {
        return a + b;
    }
}

class AdvancedCalc extends SimpleCalc {
    @Override
    public double calc(double a, double b) {
        Scanner input = new Scanner(System.in);
        System.out.print(a + " ? " + b + " \n > Select + - * / % : ");
        String op = input.next();
        input.close();

        switch (op) {
            case "+":
                return a + b;
            case "-":
                return a - b;
            case "*":
                return a * b;
            case "/":
                return a / b;
            case "%":
                return a % b;
        }

        return 0;
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        SimpleCalc simpleCalc = new SimpleCalc();
        System.out.println(simpleCalc.calc(120, 0.2));

        AdvancedCalc advancedCalc = new AdvancedCalc();
        System.out.println(advancedCalc.calc(120, 0.2));
    }
}

/*
 * Output: MethodOverriding.java
 * 120.2
 * 120.0 ? 0.2
 * > Select + - * / % : /
 * 600.0
 */