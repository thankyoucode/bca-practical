class College {
  private static int number_of_students = 0;

  public void addStudent() {
    number_of_students++;
  }

  public static int getNumberOfStudents() {
    return number_of_students;
  }
}

public class StaticForAll {
  public static void main(String[] args) {
    College myCollege = new College();
    myCollege.addStudent();
    myCollege.addStudent();
    myCollege.addStudent();
    System.out.println(College.getNumberOfStudents());
  }
}

/*
 * 3
 */