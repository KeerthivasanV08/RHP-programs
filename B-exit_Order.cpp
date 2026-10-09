#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    vector<int> arr[N];
    int start = 1,end = 10;
    for(int cntr = 1;cntr<=N;cntr++){
        int curr;cin>>curr;
        if(!(curr>=start && curr <= end)){
            cout<<"No"<<endl;
            return 0;
        }
        if(cntr %10 == 0){
            start+= 10;end+= 10;
        }
    }
    cout<<"Yes"<<endl;
}
