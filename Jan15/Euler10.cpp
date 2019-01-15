#include <bits/stdc++.h>

using namespace std;

struct Crivo {
    int size;
    vector<int> primes;
    vector<bool> isPrime;

    Crivo(int _size) : size(_size) {
        isPrime.assign(size, true);
    }
    
    void findPrimes() {
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i < size; ++i) {
            if( isPrime[i] ) {
                primes.push_back(i);
                for(long long j = 1LL * i * i; j < size; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }
};

int main()
{
    constexpr int limit = 2 * 1e6;
    Crivo meuCrivo(limit);
    meuCrivo.findPrimes();

    long long sum = 0LL;
    for(const auto& prime : meuCrivo.primes ) sum += prime;

    cout << sum << endl;
    return 0;
}
