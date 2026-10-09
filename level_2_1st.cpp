#include <bits/stdc++.h>
using namespace std;

int main(){
   int row,col;
   cin>>row>>col;
   vector<vector<int>> arr(row,vector<int>(col));
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
   }
   bool downwards;
   int sr,sc;
   cin>>sr>>sc;
   if(sr == 0){
    downwards = true;
   }
   else if(sr == row-1){
    downwards = false;
   }
   else{
    cout<<"Invalid position"<<endl;
    return 0;
   }
   for(int k=0;k<col;k++){
        int currentcol = (sc+k)%col;
        if(downwards){
            for(int i =0;i<row;i++){
                cout<<arr[i][currentcol]<<",";
            }
        }
        if(!downwards){
            for(int i = row-1;i>=0;i--){
                cout<<arr[i][currentcol]<<",";
            }
        }
        downwards = !downwards;
   }
   return 0;
}
