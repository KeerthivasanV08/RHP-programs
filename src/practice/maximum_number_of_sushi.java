package practice;
import java.util.*;
public class maximum_number_of_sushi {
	  public static void main(String[] args){
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    int m = sc.nextInt();
	    int[] arr1 = new int[n];
	    int[] arr2 = new int[m];
	    for(int i = 0;i<n;i++){
	      arr1[i] = sc.nextInt();
	    }
	    for(int j =0;j<m;j++){
	      arr2[j] = sc.nextInt();
	    }
	    Arrays.sort(arr1);
	    Arrays.sort(arr2);
	    
	    int i =n-1,j=m-1;
	    int count = 0;
	    while(i>=0&&j>=0){
	      if(arr2[j]<=2*arr1[i]){
	        count++;
	        i--;
	        j--;
	      }
	      else{
	        j--;
	      }
	    }
	    System.out.println(count);
	    
	  }
	}