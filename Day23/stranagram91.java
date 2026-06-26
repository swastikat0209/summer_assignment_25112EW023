package Day23;

import java.util.Scanner;

public class stranagram91 
{
    public static void main(String[]args)
    {
        int i,sum1=0,sum2=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first string:");
        String s1=sc.nextLine();
        s1=s1.trim();
        s1=s1.toLowerCase();
        System.out.println("Enter second string:");
        String s2=sc.nextLine();
        s2=s2.trim();
        s2=s2.toLowerCase();
        for(i=0;i<s1.length();i++)
        sum1+=s1.charAt(i);
        for(i=0;i<s2.length();i++)
        sum2+=s2.charAt(i);
        if(sum1==sum2)
        System.out.println("Strings are anagram of each other");
        else
        System.out.println("Strings are not the anagram of each other");   
        sc.close();
    }
}
