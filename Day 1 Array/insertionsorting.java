import java.util.Scanner;
class insertionsorting{

//Taking Input of the array 
public static int[] __input__()
{
    int n;
    System.out.println("Enter the size of the array: ");   
    Scanner sc = new Scanner(System.in);

    n = sc.nextInt();

    int[] array = new int[n]; 
    for (int i = 0; i < n; i++)
    {
        array[i] = sc.nextInt();
    }
    sc.close();
    return array;
}

//Printing the array
public static void PrintArray(int[] arr,int len)
{
    System.out.println();
    for (int i = 0; i < len; i++)
    {
        System.out.print(arr[i]+" ");
    }
    System.out.println();
}

//Sorting the array in a linear search using insertion sorting method
    public static void insertionsort(int[]array, int n)
    {
        for (int i = 1; i < n; i++)
        {
            int key = array[i];
            int j = i-1;
            while (j>=0 && array[j]>key)
            {
                array[j+1] = array[j];
                j--;
                
                PrintArray(array, n);
                System.out.println("key: " +key);
            }
            array[j+1] = key;
        }
    }



    public static void main(String[] args)
    {
        int[] array = __input__();
        int n = array.length;
        PrintArray(array, n);
        insertionsort(array,n);
        System.out.println("After sorting: ");
        PrintArray(array, n);
    }
}