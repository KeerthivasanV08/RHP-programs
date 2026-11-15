#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if((i == 0 && j%3 != 0)||(i == 1 && j%3 == 0)||(i-j == 2)||(i+j == 8)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}