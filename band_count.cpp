// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     int h,w,n,q;cin>>h>>w>>n>>q;
//     vector<vector<int>> matrix(h+1,vector<int>(w+1,0));
//     for(int i=0;i<n;i++){
//         int r,c;cin>>r>>c;
//         matrix[r][c] = 1;
//     }
//     for(int i=1;i<=h;i++){
//         for(int j=1;j<=w;j++){
//             matrix[i][j] = matrix[i][j-1]+matrix[i][j];
//         }
//     }
//     for(int i=1;i<=w;i++){
//         for(int j=1;j<=h;j++){
//             matrix[j][i] = matrix[j-1][i] + matrix[j][i];
//         }
//     }
//     for(int i=0;i<q;i++){
//         int c,q1,q2;cin>>c>>q1>>q2;
//         if(c == 1){
//             cout<<matrix[q2][w]- matrix[q1-1][w]<<endl;
//         }
//         else{
//             cout<<matrix[h][q2] - matrix[h][q1-1]<<endl;
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w,n,q;cin>>h>>w>>n>>q;
    vector<int> row(n);
    vector<int> col(n);
    for(int i=0;i<n;i++){
        int r,c;cin>>r>>c;
        row[i] = r;
        col[i] = c;
    }
    sort(row.begin(),row.end());
    sort(col.begin(),col.end());
    for(int i=0;i<q;i++){
        int c,q1,q2;cin>>c>>q1>>q2;
        if(c == 1){
            auto upper = lower_bound(row.begin(),row.end(),q1);
            auto lower = upper_bound(row.begin(),row.end(),q2);
            cout<<lower-upper<<endl;
        }
        else{
            auto left  = lower_bound(col.begin(),col.end(),q1);
            auto right = upper_bound(col.begin(),col.end(),q2);
            cout<<right - left<<endl;
        }
    }
    return 0;
}

