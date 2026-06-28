package Day24;
import java.util.Scanner;
public class strcomp94 
{
    public static void main(String[]args)
    {
        int i=0,count;
        char ch='\0';
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string:");
        String s=sc.nextLine();
        s=s.trim();
        s=s.toLowerCase();
        while(i<s.length())
        {
            count=0;
            ch=s.charAt(i);
            while(i<s.length()&&s.charAt(i)==ch)
            {
                count++;
                i++;
            }
            System.out.print(ch+""+count);
        }
        sc.close();
    }
}
