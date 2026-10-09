#include <bits/stdc++.h>
using namespace std;


int orangesRotting(vector<vector<int>>& grid){

  int m = grid.size();i =
  int n = grid[0].size();
  queue<pair<int,int>> q;
  int fresh = 0;
  for(int i =0;i<m;i++){
    for(int j=0;j<n;j++{
       if(grid[i][j] == 2){
        q.push({i,j});
       }

    }
  }


}
