package Day21;
import java.util.Scanner;
public class strrev82
{
    public static void main(String[]args)
    {
        String rev="";
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text you want to reverse:");
        String s=sc.nextLine();
        s=s.trim();
        System.out.println("Your text is "+s);
        for(int i=s.length()-1;i>=0;i--)
        {
            rev+=s.charAt(i);
        }
        System.out.println("The reversed text is:"+rev);
        sc.close();
    }
}
