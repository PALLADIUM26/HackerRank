import java.io.*;
import java.util.*;

public class JavaStringReverse {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        String rev="";
        for (int i=A.length()-1;i>-1;i--){
            rev+=A.charAt(i);
        }
        // System.out.println(rev);
        if(A.equals(rev))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
