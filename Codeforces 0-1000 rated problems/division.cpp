#include <bits/stdc++.h>
using namespace std;
int main(){
    int test, a;
    cin>>test;
    while(test--){
        cin>>a;
 
        if(a<0){
            cout<<"Division 4"<<endl;
        }
        else if(a<=1399){
cout<<"Division 4"<<endl;
        }
        else if(a==1400||a<=1599){
cout<<"Division 3"<<endl;
        }
        else if(a==1600||a<=1899){
            cout<<"Division 2"<<endl;
        }
        else{
            cout<<"Division 1"<<endl;
        }
        
    }
 
}
