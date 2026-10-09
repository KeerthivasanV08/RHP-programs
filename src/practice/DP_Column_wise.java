package practice;
import java.util.*;
public class DP_Column_wise {
	    static long fMax = Long.MIN_VALUE;
	    static long sMax = Long.MIN_VALUE;

	    public static void main(String[] args)
	    {
	        Scanner sc = new Scanner(System.in);

	        int r =  sc.nextInt();
	        int c = sc.nextInt();

	        int[][] mat = new int[r][c];
	        long[][] dp = new long[r][c];

	        for (int row = 0; row < r; row++)
	        {
	            for (int col = 0; col < c; col++)
	            {
	                mat[row][col] = sc.nextInt();

	                if(col ==0) // filling first col in dp[][]
	                    dp[row][0] = mat[row][0];
	            }
	        }

	        for(int col = 1; col < c; col++) //since first col is filled already start from second col
	        {
	            updateMax(dp,col-1,r);
	            for(int row = 0; row < r; row++)
	            {
	                dp[row][col] = mat[row][col] + (dp[row][col-1] == fMax ? sMax : fMax);
	            }
	        }

	        updateMax(dp,c-1,r);
	        System.out.println(fMax);
	    }
	    static void updateMax(long[][] dp, int col, int r)
	    {
	        for(int row = 0; row < r; row++)
	        {
	            if(fMax < dp[row][col])
	            {
	                sMax = fMax;
	                fMax = dp[row][col];
	            }
	            else if(sMax < dp[row][col])
	                sMax = dp[row][col];
	        }
	    }
	}