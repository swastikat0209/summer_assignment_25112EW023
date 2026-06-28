package Day24;
import java.util.Scanner;
public class strremdup96 
{
     public static void main(String[]args)
    {
        int i,j,count;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first String:");
        String s=sc.nextLine().trim().toLowerCase();
        System.out.println("String without duplicate characters is:");
        for(i=0;i<s.length();i++)
        {
            count=0;
            for(j=0;j<i;j++)
            {
                if(s.charAt(i)==s.charAt(j))
                {   count++;
                    break;
                }  
            }
            if(count!=0)
            continue;
        System.out.print(s.charAt(i));
        }
        sc.close();
    }
}
