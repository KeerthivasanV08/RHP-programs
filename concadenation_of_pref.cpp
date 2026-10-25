#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int M,N;cin>>M>>N;
    vector<ll> A(M+1,0);
    vector<ll> pref(M+1,0);
    vector<ll> blocksum(M+1,0);
    vector<ll> pos(M+1,0);
    for(int i=1;i<=M;i++){
        int elem;cin>>elem;
        A[i] = elem;
        pref[i] = pref[i-1]+A[i];
        blocksum[i] = blocksum[i-1]+pref[i];
        pos[i] = pos[i-1] + i;
    }
    auto getPrefix = [&](ll x)->ll{
        if(x == 0) return 0LL;

        int i = lower_bound(pos.begin()+1,pos.end(),x) - pos.begin();
        ll offset = x - pos[i-1];
        return blocksum[i-1]+pref[offset];


    };
    while(N--){
        ll L,R;cin>>L>>R;
        cout<<getPrefix(R) - getPrefix(L-1)<<endl;
    }
    return 0;
}