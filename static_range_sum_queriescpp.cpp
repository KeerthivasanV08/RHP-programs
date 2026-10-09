#include <bits/stdc++.h>
#include <vector>
using namespace std;

 int main(){
   int n,q;
   cin>>n>>q;
   vector<long long> arr(n+1,0);

   for(int i=1;i<n+1;i++){
    long long x;cin>>x;
      arr[i] = arr[i-1]+x;
   }

   while(q--){
    int l,r;cin>>l>>r;
    cout<<arr[r] - arr[l-1]<<endl;
   }
   return 0;

 }
