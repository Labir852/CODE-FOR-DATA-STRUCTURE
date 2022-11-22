import java.util.Scanner;

public class stack{

    static int size =10;
    public static int[] stack = new int[size];
    public static int top = -1 ;
    public static void push(int number)
    {
        
        if(top == size-1 )
        {
            System.out.println("Stack overflow");
        }
        else
        {
            top++;
            stack[top] = number;
        }
    }
    public static int pop()
    {
        int pop;
        if(top == -1)
        {
            pop = -1;
            System.out.println("Stack underflow");
        }
        else
        {
            pop = stack[top];
            top--;
        }
        
        return pop;
        
    }
    public static void print()
    {
        int i ;
        if(top == -1)
        {
            System.out.println("Stack underflow");
        }
        else if(top == size)
        {
            System.out.println("Stack overflow");
        }
        for (i = top; i >= 0; i++)
        {
            System.out.println(" "+stack[i]);    
        }
    }
    public static void peek()
    {
        if(top == -1)
        {
            System.out.println("Stack is empty");
        }
        else
        {
            System.out.println(stack[top]);
        }
    }
    public static void main(String[] args) 
    {
        System.out.println("Enter the value you want to insert: ");
        Scanner sc = new Scanner(System.in);
        int number;
        int op;
        while(true)
        {
            System.out.println("Enter choice for stack operation: (1 for push // 2 for pop // 3 for peek)");
            op = sc.nextInt();
            switch(op){
             case 1:
                number = sc.nextInt();
                push(number);
                print();
            case 2:
                pop();
                print();
            case 3: 
                peek();
            } 

        }
        
    }
}
