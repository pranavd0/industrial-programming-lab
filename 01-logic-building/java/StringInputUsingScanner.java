import java.util.*;

class StringInputUsingScanner
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Your Name");
        String name=sobj.nextLine();

        System.out.println("Welcome:"+name);
    }
}