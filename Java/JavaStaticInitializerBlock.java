import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        // int l,b;
        int l=sc.nextInt();
        int b=sc.nextInt();
        // boolean flag;

        if(l<1 || b<1){
        //  flag=false;
         System.out.println("java.lang.Exception: Breadth and height must be positive");
        }
        else{
        //   flag=true;
           System.out.println(l*b); 
        }
    }
}

