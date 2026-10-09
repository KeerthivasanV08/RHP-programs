#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a,b;cin>>a>>b;
    string result=b+b;
    cout<<(result.contains(a)?"Yes":"No")<<endl;
}