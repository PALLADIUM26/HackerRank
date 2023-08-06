import java.io.*;
import java.util.*;

public class JavaIntToString { //change class name Solution

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        String s="";
        int flag=0;
        if (n<=100 && n>=-100){
            String s1=String.valueOf(n);
            flag=1;
            }
        if (flag==1)
            System.out.println("Good job");
        else
            System.out.println("Wrong answer");
    }
}
