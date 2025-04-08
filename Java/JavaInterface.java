import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int res, n;
        n = sc.nextInt();
        MyCalculator ob = new MyCalculator();
        res = ob.divisor_sum(n);
        System.out.println(res);
    }
}

interface AdvancedArithmetic{
    public int divisor_sum(int n);
}

class MyCalculator implements AdvancedArithmetic{
    public int divisor_sum(int n){
        System.out.println("I implemented: AdvancedArithmetic");
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(n%i == 0)
                sum += i;
        }
        return sum;
    }
}
