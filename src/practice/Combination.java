package practice;

import java.util.Scanner;

public class Combination {
     public static void main(String[] args){
    	 Scanner sc = new Scanner(System.in);
    	 String str = sc.nextLine();
    	 int len = str.length();
    	 for(int cntr = 1;cntr<(1<<len);cntr++) {
    		 String combi = "";
    		 for(int ch = 0;ch<len;ch++) {
    			 if((cntr & (1<<ch))>0){
    				 combi += str.charAt(ch);
    				 
    			 }
    		 }
    		 System.out.println(combi);
    	 }
    	 sc.close();
     }
}
