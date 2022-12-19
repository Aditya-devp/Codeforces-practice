#include<iostream>
using namespace std;
int countodd,counteven,odd,even;

int main() {
	int test,i,elements;
	cin >> test;
countodd=0;
counteven=0;
	for (i = 1; i <= test; i++){
		cin >> elements;
		if(elements&1){
			odd=i;
			countodd++;
		}
		else{
			even=i;
			counteven++;
		}
	}
	if(counteven>countodd)
		cout<<odd<<endl;
	else
		cout<<even<<endl;
	return 0;

}
