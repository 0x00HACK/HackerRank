import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int remainder,count1=0,count2=0;
        while(n>0)
        {
            remainder=n%2;
            n/=2;
            if(remainder==1)
            {
                ++count1;
                if(count1>=count2)  count2=count1;
            }
            else    count1=0;
            /*
            if(remainder==1)    ++count1;
            else    count1=0;
            if(count1>=count2)  count2=count1;  //count2 = Math.max(count1, count2);
            */
        }
        System.out.print(count2);
        scanner.close();
    }
}
