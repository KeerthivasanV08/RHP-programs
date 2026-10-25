#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    map<string,int> mp;
    int id = 1;
    for(int i=0;i<N;i++){
        string name;cin>>name;
        if(!mp.count(name)){
            mp[name] = id;
            cout<<id<<endl;
            id = id+1;
        }
        else{
            cout<<mp[name]<<endl;
        }
    }
    return 0;

}