#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N;cin>>N;
    vector<int> cmn(26,50);
    for(int i=0;i<N;i++){
        string s;cin>>s;
        vector<int> curr(26);
        for(char ch : s){
            curr[(ch-'a')]++;
        }
        for(int i=0;i<26;i++){
            cmn[i] = min(cmn[i],curr[i]);
        }

    }
    for(int i=0;i<26;i++){
        while(cmn[i]--){
            cout<<(char)('a' - i);
        }
    }
}