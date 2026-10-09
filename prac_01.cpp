#include <bits/stdc++.h>
using namespace std;

int diff[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
void dfs(vector<vector<char>>& matrix,int R,int C,int row,int col){
    matrix[row][col] = '0';
    for(int i=0;i<4;i++){
        int ar = row + diff[i][0];int ac = col + diff[i][1];
        if(ar>=0 && ar < R && ac>=0 && ac <C && matrix[ar][ac] == '1'){
            dfs(matrix,R,C,ar,ac);
        }
    }

}



int main(){
    int row,col;cin>>row>>col;
    vector<vector<char>> matrix(row,vector<char>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                cin>>matrix[i][j];
        }
    }
    int islands = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == '1'){
                islands++;
                dfs(matrix,row,col,i,j);
            }
        }
    }
    cout<<islands<<endl;
    return 0;
}
