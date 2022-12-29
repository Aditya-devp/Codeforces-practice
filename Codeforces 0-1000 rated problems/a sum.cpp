#include <iostream>
using namespace std;
int main(){
    int test, a,b,c;
    cin>>test;
    while(test--){
        cin>>a>>b>>c;
        if(a+b==c||b+c==a||a+c==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
}
