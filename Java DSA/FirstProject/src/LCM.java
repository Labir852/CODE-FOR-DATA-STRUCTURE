import java.util.Scanner;

public class LCM {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Welcome to sum of digits");
        System.out.print("Please enter your First number: \t");
        int FirstNum = scanner.nextInt();
        System.out.print("Please enter your Second number: \t");
        int SecondNum = scanner.nextInt();
        int lcmCalculate = LCMCalculate(FirstNum,SecondNum);
        System.out.println(lcmCalculate);
    }
    public static int LCMCalculate(int FirstNum,int SecondNum){
        int i = 1;
        while (i<= SecondNum){
            int factor = FirstNum * i;
            if(factor % SecondNum == 0){
                return factor;
            }
            i++;
        }
        return 0;
    }
}
