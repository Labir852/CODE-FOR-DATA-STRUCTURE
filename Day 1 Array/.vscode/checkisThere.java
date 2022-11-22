import java.util.Scanner;

public class checkisThere {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String Word = sc.next();
        String isWord = sc.next();
        int len = Word.length();
        int lenisWord = isWord.length();
        int i=0,j =0,flag=0,count=0;
        char[] isword = new char[lenisWord];
        char[] word = new char[len];
        for(char d : isWord.toCharArray())
        {
            isword[i] = d;
        }
        i=0;
        for(char d : Word.toCharArray())
        {
            word[i] = d;
        }

        i=0;

        for(i=0;i<len;i++)
        {
            if(word[i] == isword[j])
            {
                flag+=1;
                
                if(flag ==lenisWord)
                {
                    count+=1;
                    flag=0;
                }
            }
            j++;
            if(j == lenisWord)
            j=0;
        }
        System.out.println("Total quantity is " + count );
    }
}
