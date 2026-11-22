#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string str;cin>>str;
    int i =0,j=0;
    int count = 0;
    auto hasall = [](const string& s){
        for(char c : {'A','B','C'}){
            if(s.find(c) == string::npos)return false;
        }
        return true;
    };
    for(int i=0;i<n-1;i++){
        string first = str.substr(0,i);
        if(!hasall(first))continue;
        for(int j=i+1;j<n;j++){
            string second = str.substr(i,j-i);
            string third = str.substr(j);
            if(hasall(second) && hasall(third)){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;

}