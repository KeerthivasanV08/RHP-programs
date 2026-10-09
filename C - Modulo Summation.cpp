#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    int sum =0;
    int i =N;
    while(N--){
        int n;cin>>n;
        sum+= n;
    }
    cout<<sum-N<<endl;
    return 0;
}