using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoveArray
{
    internal class PrimeNumber
    {
        public PrimeNumber(int n) 
        {
            int count = 0;
            for (int i = 1; i <= Math.Sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    // Add divisor i to the list
                    count++;

                    if (n / i != i)
                    {
                        count++;
                    }
                }
            }
            if (count == 2)
                Console.WriteLine("Yes it is a prime");
            else Console.WriteLine("Not a prime");

        }
    }
}
