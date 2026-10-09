#include <bits/stdc++.h>
using namespace std;

int main(){
    int I;cin>>I;
    while(I--){
        int N,K;cin>>N>>K;
        string s;cin>>s;
        int F = N/K;
        vector<int> farm(F,false);
        for(unsigned int i=0;i<s.size();i++){
            if(s[i] == '0'){
                int farmidx = i/K;
                farm[farmidx] = true;
            }
        }
        int count =0;
        for(int i=0;i<F;i++){
            if(!farm[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}