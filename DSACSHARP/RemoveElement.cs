using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoveArray
{
    internal class RemoveElement
    {
        public RemoveElement(int[] nums, int val) 
        {
            if (nums.Length == 0) Console.WriteLine(0);

            int uniqueCount = 0;

            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != val)
                {
                    nums[uniqueCount++] = nums[i];
                }
            }
            Console.WriteLine(uniqueCount);
        }
    }
}
