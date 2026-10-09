import java.util.*;
class sofa{
	    int fsr,fsc,ssr,ssc;
	    char dir;
	    int moves;
	    public sofa(int fsr,int fsc,int ssr,int ssc,char d,int m) {
		this.fsr = fsr;this.fsc = fsc;
		this.ssr = ssr;this.ssc = ssc;
		this.dir = d;this.moves = m;
	}
}
public class SofaState{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int R = sc.nextInt();int C = sc.nextInt();
		Queue<sofa> q  = new LinkedList<>();
		char grid[][] = new char[R][C];
		int fsr,fsc,ssr,ssc,sofacount =0;
		fsc=fsr=ssr=ssc = -1;
		for(int row=0;row<R;row++) {
			for(int col =0;col<C;col++) {
				char ch = sc.next().charAt(0);
				grid[row][col] = ch;
				if(ch == 's') {
					sofacount++;
					if(sofacount == 1)
						fsr = row;
					    fsc = col;
				}
				else {
					ssr = row;
					ssc = col;
					sofa s = new sofa(fsr,fsc,ssr,ssc,(fsr == ssr)?'H':'V',0);
					q.add(s);
				}
				
			}
		}
	Set<String> vis = new HashSet<>();
	while(!q.isEmpty()) {
		sofa s = q.poll();
		if(grid[s.fsr][s.fsc] == 'S' && grid[s.ssr][s.ssc] == 'S') {
			System.out.println(s.moves);return;
		}
		if(s.dir == 'H') {
			//check drag right
			if(s.ssc<C-1 && grid[s.ssr][s.ssc+1] != 'H') {
				if(canAdd(s.ssr,s.ssc,s.ssr,s.ssc+1,vis)) {
					q.add(new sofa(s.ssr,s.ssc,s.ssr,ssc+1,'H',s.moves+1));
				}
			}
			//check drag left
			if(s.fsc>0 && grid[s.fsr][s.fsc-1] != 'H') {
				if(canAdd(s.fsr,s.fsc-1,s.fsr,s.fsc,vis)) {
					q.add(new sofa(s.fsr,s.fsc-1,s.fsr,s.fsc,'H',s.moves+1));
				}
			}
			//check drag top
			if(s.fsr>0 && grid[s.fsr-1][s.fsc] !='H'&& grid[s.ssr-1][s.ssc] != 'H') {
				if(canAdd(s.fsr-1,s.fsc,s.fsr-1,s.ssc,vis)) {
					q.add(new sofa(s.fsr-1,s.fsc,s.fsr-1,s.ssc,'H',s.moves+1));
				}
			}
			//check drag to bottom
			if(s.fsc<R-1 && grid[s.fsr+1][s.fsc] !='H' && grid[s.ssc+1][s.ssc] != 'H') {
				if(canAdd(s.fsr+1,s.fsc,s.ssr+1,s.ssc,vis)) {
					q.add(new sofa(s.fsr+1,s.fsc,s.ssr+1,s.ssc,'H',s.moves+1));
				}
			}
			//rotation
			if(s.fsr>0 && grid[s.fsr-1][s.fsc] != 'H' && grid[s.ssr-1][s.ssc] != 'H') {
				//First seat is going to be on the top of second seat clockwise
				if(canAdd(s.fsr-1,s.fsc,s.ssr-1,s.ssc,vis)) {
					q.add(new sofa(s.ssr-1,s.ssc,s.ssr,s.ssc,'V',s.moves+1));
				}
				//second seat is going to be on the top of first seat anti clockwise
				if(canAdd(s.fsr,s.fsc,s.fsr-1,s.fsc,vis)) {
					q.add(new sofa(s.fsr,s.fsc,s.fsr-1,s.fsc,'V',s.moves+1));
				}
			}
			if(s.fsr<R-1 && grid[s.fsr+1][s.fsc] != 'H' && grid[s.ssr+1][s.ssc] != 'H') {
				//First seat is going to be on the BOTTOM of second seat Anti clockwise
				if(canAdd(s.ssr+1,s.ssc,s.ssr,s.ssc,vis)) {
					q.add(new sofa(s.ssr+1,s.ssc,s.ssr,s.ssc,'V',s.moves+1));
				}
				//second seat is going to be on the bottom of first seat  clockwise
				if(canAdd(s.fsr,s.fsc,s.fsr+1,s.fsc,vis)) {
					q.add(new sofa(s.fsr,s.fsc,s.fsr+1,s.fsc,'V',s.moves+1));
				}
			}			
			
		}
		if(s.dir == 'V') {
			//check drag top
			if(s.fsr>0 && grid[s.ssr-1][s.fsc] != 'H') {
				if(canAdd(s.fsr-1,s.fsc,s.fsr,s.fsc,vis)){
					q.add(new sofa(s.fsr-1,s.fsc,s.fsr,s.fsc,'V',s.moves+1));
				}
			}
			//check drag bottom
			if(s.fsr <R-1 && grid[s.fsr+1][s.fsc] != 'H') {
				if(canAdd(s.fsr+1,fsc,fsr,fsc,vis)) {
					q.add(new sofa(s.fsr+1,s.fsc,s.fsr,s.fsc,'V',s.moves+1));
				}
			}
			//check for drag left
			if(s.fsc >0 && grid[s.fsr][s.fsc-1] != 'H' && grid[s.ssr][s.ssc-1] != 'H') {
				if(canAdd(s.fsr,s.fsc-1,s.ssr,s.ssc-1,vis)) {
					q.add(new sofa(s.fsr,s.fsc-1,s.ssr,s.ssc-1,'V',s.moves+1));
				}
			}
			//check for drag right
			if(s.fsc<C-1 && grid[s.fsr][s.ssc+1] != 'H' && grid[s.ssr][s.ssc+1] != 'H') {
				if(canAdd(s.fsr,s.fsc+1,s.ssr,s.ssc+1,vis)){
					q.add(new sofa(s.fsr,s.fsc+1,s.ssr,s.ssc+1,'V',s.moves+1));
				}
			}
			//Rotation
			if(s.fsc>0 && s.fsc<C && grid[s.fsr][s.fsc-1] != 'H' && grid[s.fsr][s.fsc+1] != 'H') {
				if(canAdd(s.fsr,s.fsc,s.fsr,s.fsc-1,vis)) {
					q.add(new sofa(s.fsr,s.fsc,s.fsr,s.fsc-1,'H',s.moves+1));
				}
				if(canAdd(s.fsr,s.fsc,s.fsr,s.fsc+1,vis)) {
					q.add(new sofa(s.fsr,s.fsc,s.fsr,s.fsc+1,'H',s.moves+1));
				}
			}
			if(s.ssc>0 && s.ssc<C && grid[s.ssr][s.ssc-1] != 'H' && grid[s.ssr][s.ssc+1] != 'H') {
				if(canAdd(s.ssr,s.ssc-1,s.ssc,s.ssc,vis)) {
					q.add(new sofa(s.ssr,s.ssc-1,s.ssr,s.ssc,'H',s.moves+1));
				}
				if(canAdd(s.ssr,s.ssc+1,s.ssr,s.ssc,vis)) {
					q.add(new sofa(s.ssr,s.ssc+1,s.ssr,s.ssc,'H',s.moves+1));
				}
			}
			
		}
		
	}
	System.out.println("Impossible");
    sc.close();
	}
	static final String DELIM = "-";
	private static boolean canAdd(int fsr,int fsc,int ssr,int ssc,Set<String> vis) {
		StringBuilder sb = new StringBuilder();
		sb.append(fsr).append(DELIM).append(fsc).append(DELIM);
		sb.append(ssr).append(DELIM).append(ssc);
		String key = sb.toString();
		if(vis.contains(key)) {
			return false;
		}
		vis.add(key);
		return true;
	}

}
