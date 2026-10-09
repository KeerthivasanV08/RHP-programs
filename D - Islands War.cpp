#include <bits/stdc++.h>
using namespace std;

int mian(){
    int N,M;
    vector<pair<int,int>> arr(M);
    for(int i=0;i<M;i++){
        int lt,rt;cin>>lt>>rt;
        arr[i] = make_pair(lt,rt);
    }
    sort(arr.begin(),arr.end());
    int rightmost = -1;
    int count = 0;
    for(auto[rt,lt] : arr){
        if(lt>=rightmost){
            count += 1;
            rightmost  = rt;
        }
    }
    cout<<count<<endl;
    return 0;
}
