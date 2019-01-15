#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> d(10001);
    
    function<void (int)> computeD = [&] (int n) {
        for(int i = 1; i < n; ++i) {
            if(n % i == 0) d[n] += i;
        }
    };

    for(int i = 1; i < 10001; ++i) computeD(i);
    
    long long soma = 0LL;

    for(int i = 1; i < 10001; ++i) {
        int v = d[i];
        
        if( v < 10001 && d[v] == i && v != i) {
            soma += ( v + i );
        }
    
    }

    cout << soma / 2 << endl;

    return 0;
}
