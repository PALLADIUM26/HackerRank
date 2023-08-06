import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Java_IfElse{ //change class name to Solution

    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        if (n%2!=0)
            System.out.println("Weird");
        else if (n>=2 && n<=5)
            System.out.println("Not Weird");
        else if (n>20)
            System.out.println("Not Weird");
        else
            System.out.println("Weird");
    }
}
