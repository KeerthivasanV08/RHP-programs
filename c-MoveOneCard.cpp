#include <bits/stdc++.h>
using namespace std;

bool amove(vector<int>& a,vector<int>& b,int start,int n){
    int num = b[start];
    int j = start+1;
    int i = start;
    bool skipped  = false;
    while(i<n || j<n){
        if(a[i] == b[j]){
            i++;j++;
        }
        else if(!skipped && a[i] == num){
            skipped = true;
            i++;
        }
        else{
            return false;
        }
    }
    return skipped && i==n && j==n;
}
bool bmove(vector<int>& a,vector<int>& b,int start,int n){
    int num = a [start];
    int i = start+1;
    int j = start;
    bool skipped  = false;
    while(i<n || j<n){
        if(a[i] == b[j]){
            i++;j++;
        }
        else if(!skipped && b[j] == num){
            skipped = true;
            j++;
        }
        else{
            return false;
        }
    }
    return skipped && i==n && j==n;
}


int main(){
  int n;cin>>n;
  vector<int> a(n);vector<int> b(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int j=0;j<n;j++){
    cin>>b[j];
  }
  int start = 0;
  while(start<n && a[start] == b[start]){
    start++;
  }
  if(start == n || amove(a,b,start,n)|| bmove(a,b,start,n)){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  return 0;
}