import java.io.*;
import java.util.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        scan.useDelimiter("\r?\n");
        String s="";
        s=scan.next();
        String s2="1 "+s;
        
        int c=2;
        while (c<10001){
            s=scan.next();
            s2=s2+"\n"+c+" "+s;
            c+=1;
            if (s.indexOf("end-of-file.")!=-1)
                break;
            
        }
        System.out.println(s2);

    }
}
