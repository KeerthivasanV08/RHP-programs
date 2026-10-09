#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;string s; cin>>N>>s;
    if(s[0] == '0' || s.contains("00")){
        cout<<"-1"<<endl;return;
    }
    int ans = -1;
    if(s.contains("+-") || s.contains("-+")){
        if(s.contains("+--+") || s.contains("-++-")){
            ans = 3;
        }
        else{
            ans = 2;
        }
    }
    else{
        for(int i=0;i<N;i+=2){
            if(s[i] == '0'){
                ans = 2;
                break;
            }
        }
    }
    cout<<ans<<endl;
}




int main(){
    int I;cin>>I;
    while(I--){
        solve();
    }
    return 0;
}