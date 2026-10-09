#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;cin>>str1>>str2;
    int i=0;int j=0;
    while(i<str1.size() && j<str2.size()){
        int num1 = 0, num2 = 0;
        while(i<str1.size() && str1[i] != '.'){
            num1 += num1*10 + str1[i];
            i++;
        }
        while(j<str2.size() && str2[j] != '.'){
            num2 += num2*10 + str2[j];
            j++;
        }
        if(num1<num2){
            cout<<"Upgraded"<<endl;
            return 0;
        }
        if(num1>num2){
            cout<<"Downgraded"<<endl;
            return 0;
        }
        if(i<str1.size())i++;
        if(j<str2.size())j++;
    }
    cout<<"Not change"<<endl;
    return 0;
}