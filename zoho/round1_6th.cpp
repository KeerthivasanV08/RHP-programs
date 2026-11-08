#include <bits/stdc++.h>
using namespace std;

int main(){
   string str;
   cin>>str;
   vector<bool> seen(255,false);
   string result;
   for(char ch:str){
    if(!seen[(unsigned char)ch]){
        seen[(unsigned char)ch] = true;
        result += ch;
    }
   }
   cout<<result<<endl;
}
