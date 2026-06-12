package practice;
import java.util.*;


public class Dynamic_Prog {
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

	                if(row ==0) 
	                    dp[row][col] = mat[row][col];
	            }
	        }

	        for(int row = 1; row < r; row++) 
	        {
	            updateMax(dp,row-1,c);
	            for(int col = 0; col < c; col++)
	            {
	                dp[row][col] = mat[row][col] + (dp[row-1][col] == fMax ? sMax : fMax);
	            }
	        }
	        
	        updateMax(dp,r-1,c);
	        System.out.println(fMax);
	    }
	    static void updateMax(long[][] dp, int row, int c)
	    {
	        for(int col = 0; col < c; col++)
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