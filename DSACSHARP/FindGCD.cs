using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoveArray
{
    internal class FindGCD
    {
        public static int GCD(int N1, int N2)
        {
            int gcd = 1;
            for (int i = 1; i <= Math.Min(N1, N2); i++)
            {
                if (N1 % i == 0 && N2 % i == 0)
                {
                    gcd = i;
                }
            }
            return gcd;
        }
        public static int betterGCD(int N1, int N2)
        {

            for (int i = Math.Min(N1, N2); i > 0; i--)
            {
                if (N1 % i == 0 && N2 % i == 0)
                {
                    return i;
                }
            }
            return 1;
        }

        public static int OptimalGcd(int N1, int N2)
        {
            while (N1 > 0 && N2 > 0)
            {
                if (N1 > N2)
                {
                    N1 = N1 % N2;
                }
                else
                {
                    N2 = N2 % N1;
                }
            }
            if (N1 == 0)
            {
                return N2;
            }
            return N1;
        }
        public FindGCD() 
        {
            Console.Write("enter the first number to calculate gcd: ");
            int n1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine();
            Console.Write("enter the second number to calculate gcd: ");
            Console.WriteLine();
            int n2 = Convert.ToInt32(Console.ReadLine());
            int returnedgcd = OptimalGcd(n1, n2);
            Console.Write("the gcd of " + n1 + " & " + n2 + " is: " + returnedgcd);
            Console.WriteLine();

        }
        
        
        
}
}
