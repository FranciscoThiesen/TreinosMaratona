#include <bits/stdc++.h>

using namespace std;

long long largestPrimeFactor(long long x) 
{
    long long ans = 0;
    for(long long d = 2; d * d <= x; ++d) 
    {
        if( x % d == 0) 
        {
            ans = max(ans, d);
            
            while(x % d == 0) 
            {
                x /= d;
            }
        }
    }
    
    ans = max( ans, x );
    return ans;
}

int main()
{
    cout << largestPrimeFactor(600851475143LL) << endl;

}
