using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoveArray
{
    internal class FindDevisor
    {
        ArrayList divisorsList = new ArrayList();
        
        public FindDevisor(int N) {
           
            int IterationLimit = Convert.ToInt32(Math.Sqrt(N));
            int temp = 1;
            while (temp <= IterationLimit)
            {
                if (N % temp == 0)
                {
                    // Add divisor i to the list
                    divisorsList.Add(temp);

                    if (temp != N / temp)
                    {
                        divisorsList.Add(N / temp);
                    }
                }
                    temp++;
            }
            Console.Write("The divisors of "+N+" are as below : [");
            divisorsList.Sort();
            foreach (object item in divisorsList)
            {
                if(divisorsList.IndexOf(item) == divisorsList.Count - 1)
                Console.Write(item );
                else Console.Write(item + ", ");
            }
            Console.WriteLine("]");

        }
    }
}
