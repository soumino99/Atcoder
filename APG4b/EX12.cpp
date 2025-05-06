#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using ull = unsigned long long;
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Template
    string S;
    cin >> S;
    int N = S.size();
    int A = 1;
    for (int i = 1; i < N - 1; i += 2)
    {
        if (S.at(i) == '+')
            A++;
        else
            A--;
    }
    cout << A << endl;

    return 0;
}