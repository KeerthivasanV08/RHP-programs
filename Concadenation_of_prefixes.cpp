#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int M,N;cin>>M>>N;
    vector<ll> A(M);
    for(ll i=0;i<M;i++){
        cin>>A[i];
    }
    vector<ll> prfsum;
    prfsum.push_back(0);
    int sum = 0;
    for(ll i=0;i<M;i++){
        for(ll j=0;j<=i;j++){
            sum += A[j];
            prfsum.push_back(sum);
        }
    }
    while(N--){
        ll L,R;cin>>L>>R;
        cout<<prfsum[R] - prfsum[L-1]<<endl;
    }
    return 0;
}