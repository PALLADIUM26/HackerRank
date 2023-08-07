import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) throws IOException{
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int arr[] = new int[5];
        for(int i=0; i<5; i++){
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        for(int i=0; i<5; i++){
            if(checkPrime(arr[i]))
            System.out.println(arr[i]);
        }
        
    }
    
    static boolean checkPrime(int n){
        if(n==1)return false;
        boolean flag = true;
        for(int i=2; i<n; i++){
            if(n%i == 0){
                flag = false;
                break;
            }
        }
        return flag;
    }
}
