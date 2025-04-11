import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        System.out.println(A.length()+B.length());
        int l1=A.length();
        int l2=B.length();
        int z=0;
        if (l1>l2)
            z=l2;
        else
            z=l1;
        int w=0;
        for (int i=0;i<z;i++){
            if (A.charAt(i)!=B.charAt(i))
                w=(int)A.charAt(i)-(int)B.charAt(i);
                // System.out.println(z);
                break;

        }
        // System.out.println(w);
        if (w>0){
            System.out.println("Yes");}
        else{
            System.out.println("No");}
        System.out.println(A.substring(0,1).toUpperCase()+A.substring(1,A.length())+" "+B.substring(0,1).toUpperCase()+B.substring(1,B.length()));
    }
}
