import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Please enter your number to check prime: \t");
        int num = scanner.nextInt();
        boolean isPrime = isPrime(num);
        if(isPrime)
        {
            System.out.println(num + " is a prime number");
        }
        else
        {
            System.out.println(num + " is not a prime number");
        }
    }
    public static boolean isPrime(int num){
        int i =2;
        while (i<num)
        {
            if(num%i==0)
            {
                return false;
            }
            i++;
        }
        return true;
    }
}
