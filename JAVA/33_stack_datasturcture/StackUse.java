import java.util.Stack;

public class StackUse {
    public static void main(String[] args) {
        Stack<String> studentList = new Stack<>();

        studentList.push("Kishan");
        studentList.push("Chauthary Janak");
        studentList.push("Suthar Krunal");
        studentList.push("Suthar Dashrath");
        studentList.push("Gelot Jitendr");

        System.out.println(studentList.pop());
        System.out.println(studentList.peek());
        System.out.println(studentList.search("Kishan"));
        System.out.println(studentList.firstElement());
        System.out.println(studentList.elementAt(1));
        System.out.println(studentList);
        System.out.println(studentList);
    }
}
