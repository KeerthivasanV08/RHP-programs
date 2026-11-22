#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        string str;cin>>str;
        if(str.find('o') == string::npos){
            cout<<"Faucet"<<" "<<i<<endl;
            break;
        }
        else if(str.find('x') != string::npos){
            cout<<"Drain"<<" "<<str.find('x')<<endl;
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}