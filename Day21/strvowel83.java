package Day21;
import java.util.Scanner;
public class strvowel83 
{
    public static void main(String[]args)
    {
       Scanner sc=new Scanner(System.in);
       int vowel=0;
       int consonent=0;
       System.out.println("Enter the text in which you want to check number of vowels or consonents:");
       String s=sc.nextLine();
       s=s.trim();
       System.out.println("Your text is "+s);
       for(int i=0;i<s.length();i++)
       {
            char ch=s.charAt(i);
            if(ch==' ')
            continue;
            else  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
            else
            consonent++;
        }
        System.out.println("Vowel count is:"+vowel);
        System.out.println("Consonent count is:"+consonent);
       sc.close();
    }
}
