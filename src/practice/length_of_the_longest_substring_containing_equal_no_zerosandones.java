package practice;

import java.util.*;

public class length_of_the_longest_substring_containing_equal_no_zerosandones {
	
	public static int longestsubstring(int[] arr){
		HashMap<Integer,Integer> map = new HashMap<>();
		int prefixsum = 0;
		int maxlen = 0;
		map.put(0,-1);		
		for(int i =0;i<arr.length;i++) {
			prefixsum+= (arr[i] == 0) ? -1:1;
			if(map.containsKey(prefixsum)) {
				maxlen = Math.max(maxlen,i-map.get(prefixsum));
			}
			else {
				map.put(prefixsum,i);
			}
		}
		return maxlen;
	}
	
	
	
	
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
        int size =  sc.nextInt();
        int[] arr = new int[size];
        
        for(int i=0;i<size;i++) {
        	arr[i] = sc.nextInt();
        }
        
        int len = longestsubstring(arr);
        System.out.println(len);
    }
}
