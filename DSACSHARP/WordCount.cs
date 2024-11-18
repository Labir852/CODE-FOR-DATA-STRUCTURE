using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoveArray
{
    internal class WordCount
    {
     
        public WordCount(string word) 
        {
            

            int cnt = 0;
            for (int i = 0; i < word.Length; i++)
            {
                if (i == 0 && word[i] == ' ')
                {
                    continue;
                }
                else if (i == 0 && word[i] != ' ')
                {
                    cnt++;
                    continue;
                }
                else if (word[i] != ' ' && (word[i - 1] == ' ' || word[i - 1] == ',' || (word[i - 1] == '.' && word[i + 1] != ' ') || word[i - 1] == '\t' || word[i - 1] == '\n' || word[i - 1] == '\r'))
                {
                    cnt++;
                }
            }
            Console.WriteLine("The Count is "+cnt+" in " + word);


        }
    }
}
