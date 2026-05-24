import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter your number to check isPalindrome: \t");
        int num = scanner.nextInt();
        boolean isPalindrome =isPalindrome(num);
        if(isPalindrome)
            System.out.println(num + " is Palindrome number");
        else
            System.out.println(num + " is not a Palindrome number");
    }
    public static long reverse(int num){
        long reversedNumber=0;
        while (num!=0)
        {
            reversedNumber = (reversedNumber*10) + (num % 10);
            num = num /10;
        }

        return  reversedNumber;
    }

    public static boolean isPalindrome(int num)
    {
        return num == reverse(num);
    }
}
