package Day21;
import java.util.Scanner;
public class strupcase84 
{
    public static void main(String[]args)
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a string in lower case:");
    String s=sc.nextLine();
    String scap="";
    for(int i=0;i<s.length();i++)
    {
        int u;
        int n=(int)s.charAt(i);
        if(n>=97&&n<=122)
        u=n-32;
        else
        u=n;
        scap+=(char)u;
    }
    System.out.println("The string in upper case is:"+scap);
    sc.close();
    }
}
