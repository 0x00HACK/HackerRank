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
        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }
        int sum1=0,sum2=Integer.MIN_VALUE;
        for(int i=0;i<arr.length-2;i++)
        {
            //cout<<i<<"i"<<endl;
            //sum1=0;
            //for(int j=0;j+2<arr.length;j++)
            for(int j=0;j<arr.length-2;j++)
            {
                //cout<<j<<"j"<<endl;
                sum1=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                //cout<<sum1<<"ij"<<endl;
                if(sum1>sum2){
                    sum2=sum1;
                    //sum1=0;
                }
            }
        }
        System.out.print(sum2);
        scanner.close();
    }
}
