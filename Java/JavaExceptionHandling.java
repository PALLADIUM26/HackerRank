import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args){
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);
        long res = 0;
        // for(int i=0; i<5; i++){
        //     s[i][0] = sc.nextLong();
        //     s[i][1] = sc.nextLong();
        // }
        MyCalculator ob = new MyCalculator();
        while (sc .hasNextInt()) {
            int a = sc .nextInt();
            int b = sc .nextInt();
        
            try{
                if (a==0 && b==0)
                    throw new Exception("n and p should not be zero.");
                else if(a<0 || b<0)
                    throw new Exception("n or p should not be negative.");
                else{
                    res = ob.power(a, b);
                    System.out.println(res);
                }
            }
            catch(Exception e){
            System.out.println(e);
            }
            // finally{
                
            // }
        }        
    }
}

class MyCalculator{
    long power(long a, long b){
        long res = 1;

        for(long i=1; i<=b; i++)
        res = res*a;
        return res;

    }
}
