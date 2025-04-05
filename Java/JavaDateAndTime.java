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

class Result {

    /*
     * Complete the 'findDay' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. INTEGER month
     *  2. INTEGER day
     *  3. INTEGER year
     */

    public static String findDay(int month, int day, int year) {
        Calendar cal = Calendar.getInstance();
    cal.set(year, month-1, day);
    Date date = cal.getTime();

    SimpleDateFormat sdf = new SimpleDateFormat("EEEE");
    return sdf.format(date).toUpperCase();
    }

}

public class Solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String date = sc.nextLine();
        date = date+" ";
        int p = 0, c = 0;
        String word = "";
        String month = "", day = "", year = "";
        String arr[] = new String[3];
        // String arr[] = new String[3];
        for (int i = 0;i<date.length();i++){
            if (date.charAt(i) != ' '){
                word+=date.charAt(i);
                p = i;
            }
            else{
                arr[c] = word;
                // System.out.println(word);
                word = "";
                c++;
            }
        }
        
        int m = Integer.parseInt(arr[0]);
        // System.out.println(month);
        int d = Integer.parseInt(arr[1]);
        int y = Integer.parseInt(arr[2]);
        String res = Result.findDay(m,d,y);
        System.out.println(res);
    }
}
