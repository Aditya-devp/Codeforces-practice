#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[6][6],i,j,rowmoves,colmoves;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                rowmoves=abs(3-i);
                colmoves=abs(3-j);
                cout<<rowmoves+colmoves;
            }
            
        }
        
    }
    return 0;
}
