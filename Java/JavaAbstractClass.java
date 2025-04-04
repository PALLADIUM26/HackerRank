import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        Book2 ob = new Book2();
        ob.setTitle(s);
        System.out.println("The title is: "+ob.getTitle());
    }
}

abstract class Book{
    String title;
    abstract void setTitle(String s);
    String getTitle(){
        return title;
    }
}

class Book2 extends Book{
    void setTitle(String s){
        title = s;
    }
}
