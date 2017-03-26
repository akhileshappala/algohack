import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        boolean array[] = new boolean[101];     // the values of c_i are [1;100]
        for (int i=0; i<=100; i++) { array[i] = false; }
        
        int count = 0;
        for (int i=0; i < n; i++) {
            int c = in.nextInt();
            if (array[c]) {
                array[c] = false;
                count += 1;
            }
            else
                array[c] = true;
        }
        System.out.println(count);
    }
}

