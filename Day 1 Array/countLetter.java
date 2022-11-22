import java.util.Scanner;
public class countLetter {
    public static void main(String[] args)
    {
        int capital =0, small =0;
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        for(char c : word.toCharArray())
        {
            if(c>=65 && c<=90)
            {
                capital++;
            }
            else if(c>=97 && c<=122)
            {
                small++;
            }
        }
        System.out.println("Capital letter appears in total: " + capital);
        System.out.println("Small letter appears in total: " + small);
    }

}
