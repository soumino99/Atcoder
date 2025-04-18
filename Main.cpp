#include <iostream>
#include <vector>
#define MOD 1000000000
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<long long> A(N + 1);

    long long lump = 0;

    for (int i = 0; i < K && i <= N; ++i)
    {
        A[i] = 1;
        lump += A[i] % MOD;
        // cout << A[i] << " ";
    }

    // A[K]から順番に計算してみる
    for (int i = K; i <= N; ++i)
    {
        A[i] = lump % MOD;
        lump = (lump - A[i - K] + A[i]) % MOD;
        // cout << A[i] << " ";
    }

    cout << A[N] % MOD << endl;

    return 0;
}