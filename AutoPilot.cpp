#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,S,T;cin>>N>>M>>S>>T;
    vector<vector<int>> arr(N+1);
    for(int i=0;i<M;i++){
        int fm,to;cin>>fm>>to;
        arr[fm].push_back(to);
    }
    vector<int> mn(N+1,INT_MAX);
    for(int i=0;i<=N;i++){
        for(int j : arr[i]){
            mn[i] = min(mn[i],j);
        }
    }
    deque<int> q;       
    vector<int> dist(N+1,INT_MAX);
    dist[S] = 0;
    q.push_front(S); 
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            int point = q.front();
            q.pop_front();
            for(int i:arr[point]){
                int cost = (i == mn[point]) ? 0:1;
                if(dist[point]+cost<dist[i]){
                    dist[i] = dist[point]+cost;
                    if(cost == 0){
                        q.push_front(i);
                    }
                    else{
                        q.push_back(i);
                    }
                }
            }
        }   
    }
    if(dist[T] == INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<dist[T]<<endl;
    }
    return 0;
}