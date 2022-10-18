#ifdef ONLINE_JUDGE
#pragma GCC optimize('Ofast')
#endif

#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define nline '\n'
#define mm (9 * 1e18)
#define mp make_pair
#define pb push_back
#define int long long
#define mn ((-9) * 1e18)
#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007
using namespace chrono;
#define bs binary_search
#define size(x) (x).size()
#define double long double
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define set_bits __builtin_popcountll
#define fora(i, a, b) for (int i = a; i < b; i++)
#define rfora(i, a, b) for (int i = b - 1; i >= a; i--)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
// #include <bits/debug.h>
// #else
// #define debug(x)
// #endif
/*----------------------------------------------------------------------------------------*/

void rogenx()
{
    int x;
    int y;
    cin >> x >> y;

    // Write your code here
    int n = 5;
    vector<vector<int>> v(5, vector<int>(5, -1));
    int j = 1;
    int k = -1;
    while (j <= n * n)
    {
        k++;
        // down
        if (k & 1)
        {

            for (int i = 0; i <= k; i++)
            {
                if (v[i][k] == -1)
                    v[i][k] = j++;
            }
            for (int i = k; i >= 0; i--)
            {
                if (v[k][i] == -1)
                    v[k][i] = j++;
            }
            // left
        }
        else
        {
            for (int i = 0; i <= k; i++)
            {
                if (v[k][i] == -1)
                    v[k][i] = j++;
            }
            // left
            for (int i = k; i>=0; i--)
            {
                if (v[i][k] == -1)
                    v[i][k] = j++;
            }
        }
    }

    
     cout << v[x - 1][y - 1] << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    // cout << fixed << setprecision(10);
    int _ = 1, gcode = 1;
    cin >> _;
    while (_--)
    {
        // cout << "Case #" << gcode++ << ": ";
        rogenx();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000 << "ms" << nline;
#endif
    return 0;
}

// Create a spiral Matrix;
