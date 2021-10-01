#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//Author Rahul Sannigrahi
//
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else
    return gcd(b%a,a);
} 

 
int32_t main()
{
    IOS
     int result = gcd(8,7);
    //endl is slower than "\n"
    cout << result << "\n";
    return 0;
}

