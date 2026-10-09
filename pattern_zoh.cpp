#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
   int n;cin>>n;
   for(int i=1;i<=n;i++){
      int sp = n-1;
      for(int y =1;y<=n-i;y++){
        cout<<"\t";
      }
      int k=i;
      for(int j=1;j<=i;j++){
        cout<<k<<"\t";
        k = k+sp;
        sp--;
      }
      cout<<endl;
   }


}
