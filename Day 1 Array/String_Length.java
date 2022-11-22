import java.util.Scanner;
public class String_Length {
    public static void main(String[] args)
    {
        int i=0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of String: ");
        String value = sc.nextLine();
        
        System.out.println("The string length is (Using Library Function): " + value.length());

        for(char c: value.toCharArray())
        {
            i++;
        }
        System.out.println("The string length is (Without Using Library Function): " + i);
    }
}
