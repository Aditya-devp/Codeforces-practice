#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define loop(i,n)        for(ll i=0;i<n;i++)
#define input_arr(a,n)   for(ll i=0;i<n;i++){cin>>a[i];}
#define output_arr(a,n)  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
#define input_vec(v)     for(auto &x: v) cin>>x;
#define output_vec(v)    for(auto &x: v) cout<<x<<" ";
#define fast_io          ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(a)         cout<<a<<endl;

void solve(){

}

int main()
{
    fast_io;
    int test;
    cin >> test;
    while (test--)
    {
       int n;
		cin >> n;
		long long ans = 0;
		for (int i = 1; i <= n / 2; i++) {
			ans += i * 1ll * i;
		}
		cout << ans * 8 << endl;

    }

    return 0;
}


 
