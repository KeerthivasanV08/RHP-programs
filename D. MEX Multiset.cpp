#include <bits/stdc++.h>
using namespace std;

int main(){
    int I;cin>>I;
    while(I--){
        int N;cin>>N;
        vector<int> arr(N);
        vector<int> zidx;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i] == 0){
                zidx.push_back(i);
            }
        }
        if(zidx.size() == 1){
            cout<<"No"<<endl;
            continue;
        }
        string str(N,'C');
        if(zidx.size()>0){
            int fi = zidx[0];
            str[fi] = 'B';
        }
        for(unsigned i=1;i<zidx.size();i++){
            str[zidx[i]] = 'A';
        }
        cout<<"Yes"<<endl<< str<<endl;
    }
    return 0;
}