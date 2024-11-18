using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoveArray
{
    internal class CheckArmStrong
    {
        public CheckArmStrong() 
        {

            Console.Write("Enter the Number to check armstrong: ");
            int N1 = Convert.ToInt32(Console.ReadLine());
            int temp = N1;
            int remainder = 0;
            int calculation = 0;
            int cnt = temp.ToString().Length;
            Console.WriteLine(cnt);


            while (temp != 0)
            {
                remainder = temp % 10;
                calculation = calculation + Convert.ToInt32(Math.Pow(remainder, cnt));
                temp = temp / 10;
            }
            if (N1 == calculation)
                Console.WriteLine(N1 + " is an armstrong number");
            else
                Console.WriteLine(N1 + "is not an armstrong number");
        }
    }
}
