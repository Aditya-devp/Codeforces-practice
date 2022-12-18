#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int test=4,elements;
    while(test--){
        cin>>elements;
        s.insert(elements);
    }
    cout<<4-s.size();
}
