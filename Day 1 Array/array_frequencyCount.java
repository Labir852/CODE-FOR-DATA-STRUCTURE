import java.util.Scanner;
class array_frequencyCount{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n;
        System.out.println("Enter the value of array size: ");
        n = scanner.nextInt();
        int[] list = new int[n];
        int count1=0,temp = 0;
        for(int i=0; i<n; i++)
        {
            list[i] = scanner.nextInt();
        }
        for(int k=0;k<n;k++)
        {
            if(list[k] == 1)
            count1++;
            else
            {
                if(temp<count1)
                {
                    temp = count1;
                    count1 = 0;
                }
                else
                count1 = 0;
                continue;
            }
            
        }


            System.out.println("The Most number are 1 and frequency is "+ temp);
        
    }
}