import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int result;
        for(int i=1;i<=10;i++)
            {
            result=i*N;
            System.out.printf("%d x %d = %d\n",N,i,result);
        }
    }
}