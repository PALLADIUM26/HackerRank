import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class Java1dArray { //change class name Solution
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int a[] = new int[n];
        for(int i=0;i<n;i++){
            a[i] = Integer.parseInt(br.readLine());
        }
        
        for(int i=0;i<n;i++){
            System.out.println(a[i]);
        }

        // List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
        //     .map(Integer::parseInt)
        //     .collect(toList());

        // bufferedReader.close();
    }
}

