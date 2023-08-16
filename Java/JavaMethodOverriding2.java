import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        motorcycle ob = new motorcycle();
        ob.func();
    }
}

class cycle{
    void func(){}
}

class motorcycle extends cycle{
    @Override
    void func(){
        System.out.println("Hello I am a motorcycle, I am a cycle with an engine.\nMy ancestor is a cycle who is a vehicle with pedals.");
    }
}

