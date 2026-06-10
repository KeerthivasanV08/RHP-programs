package practice;

import java.util.Scanner;

public class LongestCommonSubsequence {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	String s1 = sc.nextLine();
    	String s2 = sc.nextLine();
    	
    	int m = s1.length();
    	int n = s2.length();
    	
    	
    	int[][] dp = new int[n+1][m+1];
    	for(int i=1;i<=n;i++) {
    		for(int j=1;j<=m;j++){
    			if(s2.charAt(i-1)==s1.charAt(j-1)) {
    				dp[i][j] = 1+dp[i-1][j-1];
    			}
    			else {
    				dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]);
    			}
    		}
    	}
    	
    	StringBuilder lcs = new StringBuilder();
    	int i = n;
    	int j = m;
    	while(i>0&&j>0) {
    		if(s1.charAt(j-1) == s2.charAt(i-1)) {
    			lcs.append(s2.charAt(i-1));
    			i--;
    			j--;
    		}
    		else if(dp[i-1][j]>dp[i][j-1]){
    			i--;
    		}
    		else {
    			j--;
    		}
    	}
    	
    	System.out.println("MaxLength : "+dp[n][m]);
    	System.out.println("Subsequence : "+lcs.reverse());
    	}
}