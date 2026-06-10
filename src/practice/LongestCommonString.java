package practice;
import java.util.Scanner;
public class LongestCommonString {
          public static void main(String[] args) {
        	  Scanner sc = new Scanner(System.in);
        	  String s1 = sc.nextLine();
        	  String s2 = sc.nextLine();
        	  
        	  int m = s1.length();
        	  int n = s2.length();
        	  int maxlength = 0;
        	  int endindex = 0;
        			  
        	  int[][] dp = new int[n+1][m+1];
        	  
        	  for(int i = 1;i<=n;i++) {
        		  for(int j=1;j<=m;j++) {
        			  if(s2.charAt(i-1) == s1.charAt(j-1)) {
        				  dp[i][j] = dp[i-1][j-1]+1;
        				  if(dp[i][j]>maxlength) {
        					  maxlength = dp[i][j];
        					  endindex = j;
        				  }
        			  }
        			  else{
        				  dp[i][j] = 0;
        			  }
        		  }
        	  }
        	  String result = s1.substring(endindex-maxlength,endindex);
        	  System.out.println("Maxlength : "+maxlength);
        	  System.out.println("Substring : "+result);
          }
}
