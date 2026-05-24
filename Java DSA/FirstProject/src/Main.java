import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("welcome to multiplication table");
        System.out.println("Give a number");
        int num = scanner.nextInt();
        MultiplicationTable(num);
    }
    public static void MultiplicationTable(int multiplicationNumber){
    int i = 1;
    while (i<=10)
    {
        System.out.println(multiplicationNumber + " X " + i + " = " + (multiplicationNumber*i));
        i++;
    }
    }
}