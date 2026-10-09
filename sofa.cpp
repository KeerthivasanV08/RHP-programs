#include <bits/stdc++.h>
using namespace std;

class sofa{
    int fsr,fsc,ssr,ssc;
    char dir;
    int moves;
    public sofa(int fsr,int fsc,int ssr,int ssc,char d,int m){
      this.fsr = fsr;
      this.fsc = fsc;
      this.ssr = ssr;
      this.ssc = ssc;
      this. dir = d;
      this. moves = m;
    }
};

int main(){
    int M,N;cin>>M>>N;
    int diff = {{0,-1},{-1,0},{0,1},{1,0}};
    vector<vector<char>> matrix(M,vector<char>(N));
    for(int i=0;i<M;i++){
        for(int j=0j<N;j++){
            cin>>matrix[i][j];
        }
    }
    int startr1 = -1,startc1 = -1,startr2 = -1,start2 = -1;
    char d = '';
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(matrix[i][j] == 's'){
                if(startr1 == -1){
                    startr1 = i;
                    startc1 = j;
                }
                else{
                    startr2 = i;
                    startc2 = j;
                }
            }
        }
    }
    if(r1 == r2){
        d = 'H';
    }
    else{
        d = 'V';
    }
    queue<sofa> q;
    q.push({startr1,startc1,startr2,startc2,d,0});
    while(!q.empty()){
        sofa cur = q.front();
        q.pop();
        int r1 = cur.fsr;
        int c1 = cur.fsc;
        int r2 = cur.ssr;
        int c2 = cur.ssc;
        char d = dir;
        int move = m;
        if(matrix[dr1][dr2] == 'S' && matrix[dr2][dc2] == 'S'){
            cout<<moves;
        }
        for(int i=0;i<4;i++){
            int dr1 = r1+diff[i][0];
            int dr2 = r2+diff[i][0];
            int dc1 = c1+diff[i][1];
            int dc2 = c2+diff[i][1];
            if(dr1>=0 && dr1<M && dr2>=0 && dr2<M && dc1>=0 && dc1<N && dc2>=0 && dc2<M && matrix[dr1][dc1] == '0'&&matrix[dr2][dc2] != 'H'){
                matrix[dr1][dc1] = 'H';
                matrix[dr2][dc2] = 'H';
                q.push({dr1,dc1,dr2,dc2,d,move+1});
            }
        }
    }


}
