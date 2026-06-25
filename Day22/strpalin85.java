package Day22;
import java.util.Scanner;
public class strpalin85
{
    public static void main(String[]args)
    {
        String rev="";
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the text you want to check is palindrome or not:");
        String s=sc.nextLine();
        s=s.trim();
        System.out.println("Your text is "+s);
        for(int i=s.length()-1;i>=0;i--)
        {
            rev+=s.charAt(i);
        }
        if(s.equals(rev))
        System.out.println("String entered is palindrome");
        else
        System.out.println("String entered is not palindrome");
        sc.close();
    }
}
