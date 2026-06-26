package Day23;

import java.util.Scanner;

public class repch90 
{
    public static void main(String[]args)
    {
        int i,count=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string:");
        String s=sc.nextLine();
        s=s.trim();
        s=s.toLowerCase();
        for(i=0;i<s.length();i++)
        {
            count=0;
            for(int p=i+1;p<s.length();p++)
            {
                if(s.charAt(i)==s.charAt(p))
                {
                    count++;
                    break;
                }   
            }
            if(count!=0)
            {
                System.out.println("First repeating character is:"+s.charAt(i));
                break;
            }
        }
        sc.close();
    }
}
