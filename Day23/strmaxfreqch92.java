package Day23;

import java.util.Scanner;

public class strmaxfreqch92 
{
    public static void main(String[]args)
    {
        int i,j,count=0,p=0;
        char ch='\0';
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string:");
        String s=sc.nextLine();
        s=s.trim();
        s=s.toLowerCase();
        for(i=0;i<s.length();i++)
        {
            count=0;
            for(j=i+1;j<s.length();j++)
            {
                if(s.charAt(i)==s.charAt(j))
                {
                    count++;
                }   
            }
            if(count>p && s.charAt(i)!=' ')
            {
               p=count;
               ch=s.charAt(i);
            }
        }
        System.out.println("Maximum occuring character is:"+ch);
        System.out.println("It appeared "+(p+1)+" times");
        sc.close();
    }
}
