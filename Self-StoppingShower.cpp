#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int N,K,T;cin>>N>>K>>T;
    vector<ll> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll value = 0;
    ll count = 0;
    ll current = 0;
    for(int i=0;i<N;i++){
        if(arr[i]>T){
            break;
        }
        current  = arr[i];
        while(value<current){
            count++;
            value = value + K;
        }
        value = max(value,current + K);
    }
    while(value < T){
        count++;
        value += K;
    }
    cout<<count<<endl;
    return 0;
}