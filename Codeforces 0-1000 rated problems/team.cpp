#include <bits/stdc++.h>
using namespace std;
int main(){
	int test,p,v,t,sum=0;
	cin>>test;
	while(test--)
	{
		cin>>p>>v>>t;
		
		  if((p==1&&v==1)||(v==1&&t==1)||(t==1&&p==1))
		  sum++;
	}
	cout<<sum;
	return 0;

}
