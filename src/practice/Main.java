package practice;
import java.util.Scanner;


//FOR ONLY 26 UNIQUE-LOWERCASE
/*
public class Main {
 public static void main(String[] args) {
	 Scanner sc = new Scanner(System.in);
	 String str = sc.nextLine();
	 int flag = 0;
	 
	 for(int i =0;i<str.length();i++) {
		 char ch = str.charAt(i);
		 flag |= (1<<(ch-'a'));
	 }
	 System.out.println(flag == ((1<<26)-1) ? "Yes":"No");
	 sc.close();
 }
}
*/

//FOR ONLY 26 UNIQUE-UPPERCASE
/*
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int flag = 0;
		
		for(int i =0;i<str.length();i++) {
			char ch = str.charAt(i);
			flag |= (1<<(ch-'A'));
		}
		System.out.println(flag == ((1<<26)-1) ? "Yes":"No");
		sc.close();
	}
}
*/

//FOR BOTH 26 UNIQUE-UPPER AND LOWER CASES
/*
public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int upper_flag = 0;
		int lower_flag=0;
		
		for(int i=0;i<str.length();i++) {
			char ch = str.charAt(i);
			
			if(ch >= 'A' && ch <= 'Z') {
				upper_flag |= (1<<(ch-'A'));
			}
			
			if(ch >='a' && ch <= 'z') {
				lower_flag |= (1<<(ch-'a'));
			}
			
		}
		
		int res = ((1<<26) - 1);
		
		System.out.println((upper_flag == res && lower_flag == res) ? "Yes":"No");
		sc.close();
						
	}
}
*/