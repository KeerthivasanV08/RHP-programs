package practice;
import java.util.*;
public class Karan_and_Coffee {
	    public static void main(String[] args) {

	        Scanner sc = new Scanner(System.in);

	        int n = sc.nextInt();
	        int k = sc.nextInt();
	        int q = sc.nextInt();

	        int MAX = 200000;

	        int[] diff = new int[MAX + 2];

	        for (int i = 0; i < n; i++) {

	            int l = sc.nextInt();
	            int r = sc.nextInt();

	            diff[l]++;
	            diff[r + 1]--;
	        }
	        int[] freq = new int[MAX + 1];

	        freq[1] = diff[1];

	        for (int i = 2; i <= MAX; i++) {
	            freq[i] = freq[i - 1] + diff[i];
	        }
	        int[] pref = new int[MAX + 1];

	        for (int i = 1; i <= MAX; i++) {

	            pref[i] = pref[i - 1];

	            if (freq[i] >= k) {
	                pref[i]++;
	            }
	        }
	        StringBuilder sb = new StringBuilder();
	        while (q-- > 0) {

	            int a = sc.nextInt();
	            int b = sc.nextInt();
	            int ans = pref[b] - pref[a - 1];
	            sb.append(ans).append('\n');
	        }
	        System.out.print(sb);
	    }
	}