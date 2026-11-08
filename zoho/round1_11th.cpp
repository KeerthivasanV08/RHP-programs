#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;cin>>str;
    int n = str.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j == i || j == n-i-1){
                cout<<str[i];
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}