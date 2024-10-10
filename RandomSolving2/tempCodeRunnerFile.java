import java.util.Scanner;

public class ExceptionalExample2
{
    public static void main(String[]args)
    {
        try
        {
            int num1;
            int num2;
            System.out.println("Enter the two numbers:\n");
            Scanner s=new Scanner(System.in);
            num1=Integer.parseInt(s.next());
            num2=Integer.parseInt(s.next());
            System.out.println("Division is :"+num1/num2);
        }
        catch(ArithmeticException e)
        {
            System.out.println("cant be divided by 0");
        }
    }

    
}