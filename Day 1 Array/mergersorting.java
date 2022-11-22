import java.util.Scanner;
class mergesorting{

    public static void mergesort(int[]array, int lo, int hi)
    {
        int[]temp = new int[array.length];
        if (lo == hi) return;
        int mid = (lo + hi) / 2;
        mergesort(array, lo, mid);
        mergesort(array, mid+1,hi);

        int i,j,k;
        for(i=lo,j=mid+1,k=lo;k<=hi;k++)
        {
            if(i==mid+1) temp[k] = array[j++];
             else if(j==hi+1) temp[k] = array[i++];
             else if(array[i]<array[j]) temp[k] = array[i++];
             else temp[k] = array[j++];
        }
        for(k=lo;k<=hi;k++) array[k] = temp[k];

    }
    public static void main(String[] args)
    {
        int n;
        System.out.println("Enter the size of the array: ");   
        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();

        int[] array = new int[n]; 
        for (int i = 0; i < n; i++)
        {
            array[i] = scanner.nextInt();
        }

        for (int i = 0; i < n; i++)
        {
            System.out.print(array[i]+" ");
        }
            
        

        int lo = 0, hi = n-1;
        mergesort(array,lo , hi);
        System.out.println("After sorting: ");

        for (int i = 0; i < n; i++)
        {
            System.out.print(array[i]+" ");
        }
    }
}