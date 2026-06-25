package Day22;
import java.util.Scanner;
public class strspacedel88 
{
     public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text message:");
        String s=sc.nextLine();
        s=s.trim();
        System.out.println("Your text is "+s);
        String snew="";
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==' ')
            continue;
            else
            snew+=s.charAt(i);
        }
        System.out.println("Your text message with no spaces is:");
        System.out.println(snew);
        sc.close();
    }
}
