import java.util.Scanner;

public class GCD {

        public static void main(String[] args)
        {
            Scanner scanner = new Scanner(System.in);
            System.out.println("Welcome to GCD");
            System.out.print("Please enter your First number: \t");
            int FirstNum = scanner.nextInt();
            System.out.print("Please enter your Second number: \t");
            int SecondNum = scanner.nextInt();
            int gcdCalculate = GCDCalculate(FirstNum,SecondNum);
            System.out.println(gcdCalculate);
        }
        public static int GCDCalculate(int FirstNum,int SecondNum){
            int gcd = 1;
            int i = 2;
            int least = least(FirstNum,SecondNum);
            while (i<=least){
                if(FirstNum%i==0 && SecondNum % i ==0){
                    gcd = i;
                }
                i++;
            }
            return gcd;
        }
        public static int least(int num1,int num2)
        {
            if(num1<num2)
            {
                return num1;
            }else {
                return num2;
            }

        }


}
