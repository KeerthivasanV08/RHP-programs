#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<char> color(n,'a');
    vector<bool> visited(n,false);
    vector<int> removed(n,0);
    char current = 'a';
    string result = "";
    int lastChange;
    for(int q=1;q<=m;q++){
        int k;cin>>k;
        if(k == 1){
            int i;cin>>i;
            i= i-1;
            if(!visited[i]){    
                if(removed[i] < lastChange){
                    color[i] = current;
                }
                visited[i] = true;
            }
            else{
                visited[i] = false;
                removed[i] = q;
            }
        }
        else{
            char cr;cin>>cr;
            current = cr;
            lastChange = q;
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]){
            result += color[i];
        }
        else{
            if(removed[i]<lastChange){
                result += color[i];
            }
            else{
                result += current;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n,k;cin>>n>>k;
//   vector<string> color(n,"a");
//   string current = "a";
//   vector<bool> visit(n,false);
//   string result = "";
//   while(k--){
//     string h,m;cin>>h>>m;
//     if(h == "1"){
//       int nu = stoi(m)-1;
//       if(!visit[nu]){
//         visit[nu] = true;
//         color[nu] = current;
//       }
//       else{
//           visit[nu] = false;
//       }
//     }
//     else{
//         current = m;
//      }
//   }
//   for(int i=0;i<n;i++){
//     if(visit[i]){
//     result += color[i];
//     }
//     else{
//         result += current;
//     }
//   }
//   cout<<result<<endl;
//   return 0;
// }