#include <bits/stdc++.h>
using namespace std;

int main(){
    int  N,Q;cin>>N>>Q;
    vector<int> pos(N+1,0);
    for(int i=1;i<=N;i++){
        int curr;cin>>curr;
        pos[curr] = i;
    }
    int nextidx = N+1;
    while(Q--){
        int i;cin>>i;
        pos[i] = nextidx++;
    }
    vector<pair<int,int>> arr;
    for(int i=1;i<=N;i++){
        arr.push_back(make_pair(pos[i],i));
    }
    sort(arr.begin(),arr.end());
    for(auto[pos,val] : arr){
        cout<<val<<" ";
    }
    cout<<endl;
}