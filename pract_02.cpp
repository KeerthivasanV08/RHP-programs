#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;cin>>s1>>s2;
    int m = s1.size();
    int n = s2.size();

    int maxlength = 0;
    int endindex = 0;
    int dp[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                if(dp[i][j] > maxlength){
                    maxlength = dp[i][j];
                    endindex = j;
                }
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    string result = s1.substr(endindex - maxlength,maxlength);
    cout<<result<<endl;
    return 0;

}
