#include <bits/stdc++.h>

using namespace std;

bool checkPrime( long long x )
{
    if(x <= 1) return false;
    for(long long d = 2; d * d <= x; ++d) 
    {
        if(x % d == 0) return false;
    }
    return true;
}

long long findKthPrime(int k) 
{
    int count = 0;
    long long start = 2;
    while( count < k ) 
    {
        if( checkPrime(start) )
        {
            ++count;
            if( count == k) return start;
        }
        ++start;
    }
}

int main()
{
    cout << findKthPrime(10001) << endl;
    return 0;
}
