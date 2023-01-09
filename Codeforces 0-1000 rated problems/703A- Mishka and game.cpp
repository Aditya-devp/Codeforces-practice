

#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  int count=0,tounc=0;
  while(test--){
    int a,b;
    cin>>a>>b;

    if(a>b){
      count++;
    }
    else if(a==b){
      count++;
      tounc++;
    }
    else{
      tounc++;
    }

  }
  if(count>tounc){
    cout<<"Mishka";
  }
  else if(count==tounc){
    cout<<"Friendship is magic!^^";
  }
  else{
    cout<<"Chris";
  }
}
