#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;cin>>s;
  int count = 0;
  for(char ch:s){
    if(ch == 'o'){
      count++;
    }
  }
  if(count%2  == 0){
    cout<<"even"<<endl;
  }
  else{
    cout<<"odd"<<endl;
  }
  return 0;
}
