#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> matrix(5);
    for(int i=0;i<5;i++){
        cin >> matrix[i];
    }
    int row_min = INT_MAX;
    int col_min = INT_MAX;
    for(auto row : matrix){
        int ct = count(row.begin(),row.end(),'.');
        row_min = min(row_min,ct);
    }
    for(int i=0;i<5;i++){
        int colcnt = 0;
        for(int j=0;j<5;j++){
            if(matrix[j][i] == '.'){
                colcnt++;
            }
        }
        col_min = min(col_min,colcnt);
    }
    int rcc = 0;
    int lcc = 0;
    for(int i=0,j=0;i<5&&j<5;i++,j++){
        if(matrix[i][j] == '.'){
            rcc++;
        }
    }
    for(int i=0,j=4;i<5&&j>=0;i++,j--){
        if(matrix[i][j] == '.'){
            lcc++;
        }
    }
    cout<<min({row_min,col_min,rcc,lcc})<<endl;
    return 0;
}


