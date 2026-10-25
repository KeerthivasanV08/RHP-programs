#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;cin>>N>>M;
    vector<vector<int>> arr;
    for(int i=1;i<=N;i++){
        int k;cin>>k;
        arr.push_back({i,k});
    }
    int ans = 0;
    for(int i=0;i<N-1;i++){
        int y1 = arr[i][1];
        int y2 = arr[i+1][1];
        if(y1 == M){
            ans++;
        }
        if((y1<M && y2>M)||(y1>M && y2<M)){
            ans++;
        }
    }
    if(arr[N-1][1] == M){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}