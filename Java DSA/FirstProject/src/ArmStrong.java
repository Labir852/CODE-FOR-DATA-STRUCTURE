import java.util.Scanner;

public class ArmStrong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter your number check Armstrong: \t");
        int num = scanner.nextInt();
        boolean isArmStrong = isArmStrong(num);
        if(isArmStrong)
        {
            System.out.print(num + " is Armstrong");
        }
        else
        {
            System.out.print(num + " is not Armstrong");
        }
    }
    public static boolean isArmStrong(int num){
        int noOfDigits = noOfDigits(num);
        int numCopy = num;
        int finalNumber = 0;
        while (num>0){
            int lastDigit = num % 10;
            num /= 10;
            finalNumber += Power(lastDigit,noOfDigits);
        }
        return finalNumber == numCopy;
    }
    public static int Power(int num1,int num2){
        int result = 1;
        int i = 0;
        while (i<num2){
            result*=num1;
            i++;

        }
        return result;
    }
    public static int noOfDigits(int num)
    {
        int digits = 0;
        while (num>0){
            digits++;
            num/=10;
        }
        return digits;
    }
}
