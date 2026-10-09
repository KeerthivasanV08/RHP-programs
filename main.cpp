#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define ll long long int

int find(vector<int>& ldr,int node){
  if(ldr[node] != node){
    ldr[node] = find(ldr,ldr[node]);
  }
  return ldr[node];
}

void join(vector<int> &ldr,int lt,int rt){
  int ldrlt = find(ldr,lt);
  int ldrrt = find(ldr,rt);
  ldr[ldrrt] = ldrlt;

}

void solve(){
  int N,M;cin>>N>>M;
  vector<int> ldr(N+1);
  for(int i =1;i<N;i++){
    for(int e =1;e<=M;e++){
        int lt,rt;
        cin>>lt>>rt;
        join(ldr,lt,rt);
    }
    set<int> st;
    for(int i=1;i<=N;i++){
        st.insert(find(ldr,i));
    }
    cout<<st.size();

  }

}

int main(){
solve();
return 0;
}
