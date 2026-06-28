package Day24;
import java.util.Scanner;
public class strlong95 
{
    public static void main(String[]args)
    {
        int i=0,count,p=0;
        String longest="",s2="";
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string:");
        String s=sc.nextLine();
        while(i<s.length())
        {
            longest="";
            count=0;
            while(i<s.length()&&s.charAt(i)!=' ')
            {
                longest+=s.charAt(i);
                count++;
                i++;
            }
            if(count>p)
            {
                p=count;
                s2=longest;
            }
            i++;
        }
        System.out.println("("+s2+")is the longest word");
        sc.close();
    }
}