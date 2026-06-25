package Day22;
import java.util.Scanner;
public class strcharfreq87
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text message:");
        String s=sc.nextLine();
        s=s.trim();
        System.out.println("Your text is "+s);
        System.out.println("Enter the character whose frequency you want to check:");
        char ch=sc.next().charAt(0);
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            if(Character.toLowerCase(ch)==Character.toLowerCase(c))
            count++;
        }
        System.out.println("Number of times character "+ch+" appeared in ur text message is:"+count);
        sc.close();
    }
}

