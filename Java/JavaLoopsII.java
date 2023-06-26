import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int arr[][]=new int[t][3];
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            arr[i][0]=a;
            arr[i][1]=b;
            arr[i][2]=n;
        }
        int term=0;
        for (int i=0;i<t;i++){
            for (int j=1;j<=arr[i][2];j++){
                term=arr[i][0];
                for (int k=1;k<=(int)Math.pow(2,j-1);k*=2){
                    term+=arr[i][1]*k;
                }
                System.out.print(term+" ");
            }
            System.out.println();
        }
        in.close();
    }
}

