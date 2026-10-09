#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> tree;
vector<int> arr;

void build(int node,int start,int end){
  if(start == end){
    tree[node] = arr[start];
    return;
  }
  int mid = (start+end)/2;
  build(2*node,start,mid);
  build(2*node+1,mid+1,end);

  tree[node] = min(tree[2*node],tree[2*node + 1]);

}

int query(int node,int start,int end,int l,int r){
  if(start > r || end<l){
    return INT_MAX;
  }
  if(l<= start && end<=r){
    return tree[node];
  }
  int mid = (start + end)/2;
  int left = query(2*node,start,mid,l,r);
  int right = query(2*node+1,mid+1,end,l,r);
  return min(left,right);

}

int main(){
   int n,q;
   cin>>n>>q;
   arr.resize(n+1);
   for(int i=1;i<n+1;i++){
    cin>>arr[i];
   }
   tree.resize(4*n);
   build(1,1,n);
   while(q--){
    int l,r;
    cin>>l>>r;
    cout<<query(1,1,n,l,r)<<"\n";
   }

}
