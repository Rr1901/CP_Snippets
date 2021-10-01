/* 
------------------------------------------------------------------------------------------------
USERNAME: RASESH2005
DESCRIPTION: THIS PROGRAM CHECKS IF A NUMBER IS PRIME OR NOT
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

//SNIPPET
bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) //6n+1 and 6n-1
        if ((n%i==0)|| n%(i+2)==0) 
           return false; 
  
    return true; 
} 
int main()
{
    //APPLICATION
    bool result = isPrime(24498757);
    cout << result << endl;
    cout << (result ? "Prime" : "Not A Prime") << endl;
    return 0;
}
