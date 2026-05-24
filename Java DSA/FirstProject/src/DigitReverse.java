import java.util.Scanner;

public class DigitReverse {

        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Please enter your number to reverse: \t");
            int num = scanner.nextInt();
            System.out.println("The reversed Digit is " + reverse(num));
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


}
