#include <bits/stdc++.h>
using namespace std;

int main(){
    int I;cin>>I;
    while(I--){
        int N;cin>>N;
        int odd=0,oeq=0,eeq=0;
        vector<int> arr(N);
        for(int i=1;i<=N;i++){
            int curr;cin>>curr;
            if(curr&1) odd++;
            else{
                int q=curr/2;
                if(q&1){
                    oeq++;
                }
                else{
                    eeq++;
                }
            }
        }
        cout<<max(odd,max(oeq,eeq))<<endl;
    }
}