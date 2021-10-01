#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//Author Rahul Sannigrahi
bool isprime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) //6n+1 and 6n-1
        if ((n%i==0)|| n%(i+2)==0) 
           return false; 
  
    return true; 
} 

 
int32_t main()
{
    IOS
     bool result = isprime(24498757);
    //endl is slower than "\n"
    cout << (result ? "Prime" : "Not A Prime") << "\n";
    return 0;
}

