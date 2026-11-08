#include <iostream>
using namespace std;

int main(){
    int money,price,wrappersrequired,chocalateperexc,maxvisit;
    cin>>money>>price>>wrappersrequired>>chocalateperexc>>maxvisit;
    int chocolate = money/price;
    int wrappers = chocolate;
    int visits = 0;
    while(wrappers>= wrappersrequired && visits<maxvisit){
        int exchange = (wrappers/wrappersrequired) * chocalateperexc;
        chocolate += exchange;
        wrappers = (wrappers%wrappersrequired) + exchange;
        visits++;
    }
    cout<<chocolate<<" "<<wrappers<<endl;
}   