#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  vector<int> arr;
  bool nine = false;
  for(int i=0;i<n;i++){
    int num;cin>>num;
    if(num == 9){
      nine = true;
    }
    arr.push_back(num);
  }
  if(nine){
    int minelem = *min_element(arr.begin(),arr.end());
    cout<<minelem<<endl;
  }
  else{
    cout<<-1<<endl;
  }
  return 0;
}