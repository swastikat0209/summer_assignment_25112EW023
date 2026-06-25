package Day22;
import java.util.Scanner;
public class strwordcount86 
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text message:");
        String s=sc.nextLine();
        s=s.trim();
        System.out.println("Your text is "+s);
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==' ')
            count++;
        }
        System.out.println("Number of words in ur text message is:"+(count+1));
        sc.close();
    }
}
