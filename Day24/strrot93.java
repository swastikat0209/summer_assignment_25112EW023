package Day24;
import java.util.Scanner;
public class strrot93 
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first String:");
        String s1=sc.nextLine().trim();
        System.out.println("Enter 2nd string:");
        String s2=sc.nextLine().trim();
        String concat=s1+s1;
        if(concat.contains(s2))
        System.out.println("String rotation check success");
        else
        System.out.println("String rotation check failed");
        sc.close();
    }
}
