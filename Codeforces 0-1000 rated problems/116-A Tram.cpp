#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, entry, exit, capacity=0, max_seats=0;
     cin>>test;
    while (test--)
    {
       cin>>exit>>entry;
        capacity -= exit;
        capacity += entry;
        if (capacity > max_seats)
        {
            max_seats = capacity;
        }
    }

    cout<<max_seats<<endl;
    return 0;
}

