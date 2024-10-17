class ResultGenerator {
  int total;
  float per;
  char grade;

  public ResultGenerator(int[] marks, int theMark) {
    for (int mark : marks) {
      total += mark;
    }
    per = total / ((marks.length * theMark) / 100);
    if (per >= 80) {
      grade = 'A';
    } else if (per >= 60) {
      grade = 'B';
    } else if (per >= 50) {
      grade = 'C';
    } else if (per >= 40) {
      grade = 'D';
    } else if (per >= 30) {
      grade = 'E';
    } else {
      grade = 'F';
    }
    System.out.printf(" Total mark: %d\n Percentage: %.2f\n Grade: %c\n", total, per, grade);
  }
}

public class StudentResult {
  public static void main(String[] args) {
    new ResultGenerator(new int[] { 98, 89, 73, 82, 99, 98 }, 100);
  }
}

/*
 * Total mark: 539
 * Percentage: 89.83
 * Grade: A
 */
