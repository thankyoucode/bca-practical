import java.util.Scanner;

final class Account {
  private double balance = 0.0;

  public Account() {}

  public Account(double init_balance) {
    if (init_balance > 0) {
      balance = init_balance;
    }
  }

  // Getter method of balance
  public double getBalance() {
    return balance;
  }

  public void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
    } else {
      System.out.println("Invalid deposit amount!");
    }
  }

  public void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
    } else {
      System.out.println("Invalid withdrawal amount!");
    }
  }
}

public class FunBank {
  static Scanner input = new Scanner(System.in);

  private static int getAmount() {
    System.out.print("Enter amount: ");
    return input.nextInt();
  }

  public static void main(String[] args) {
    Account myAccount = new Account();
    boolean inBank = true;
    int user_value;
    System.out.println("Welcome to Funny Bank");
    while (inBank) {
      System.out.println("1. check balance\t2. deposit\t3. withdraw\t0. Exit the bank");
      try {
        user_value = input.nextInt();
        int amount;
        switch (user_value) {
          case 1:
            System.out.println("In account: " + myAccount.getBalance());
            break;
          case 2:
            amount = getAmount();
            myAccount.deposit(amount);
            break;
          case 3:
            amount = getAmount();
            myAccount.withdraw(amount);
            break;
          case 0:
            System.out.println("Your help and your care.");
            inBank = false;
          default:
            System.out.println("Enter only number 0 to 3");
        }
      } catch (Exception e) {
        System.out.println(" > Enter a number!");
      }
    }

    input.close();
  }
}
