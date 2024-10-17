class Manager {
  double daPer, hraPer, pfPer, salary, da, hra, pf, gross, net;

  public Manager(double da, double hra, double pf) {
    daPer = da;
    hraPer = hra;
    pfPer = pf;
  }

  private double getPerAmount(double per) {
    return salary * (per / 100);
  }

  public double netSalary(double salary) {
    this.salary = salary;
    da = getPerAmount(daPer);
    hra = getPerAmount(hraPer);
    pf = getPerAmount(pfPer);
    gross = salary + da + hra;
    net = gross - pf;
    System.out.printf("Basic Salary: %.2f\n\tDA: %.2f\n\tHRA: %.2f\n\tPF: %.2f\n\tGROSS: %.2f\nNet Salary: %.2f\n",
        salary, da, hra, pf, gross, net);
    return net;
  }
}

public class MyCompany {
  public static void main(String[] args) {
    Manager manager = new Manager(10, 5.2, 7);
    manager.netSalary(230000);
  }
}

/*
 * Basic Salary: 230000.00
 * ....DA: 23000.00
 * ....HRA: 11960.00
 * ....PF: 16100.00
 * ....GROSS: 264960.00
 * Net Salary: 248860.00
 */