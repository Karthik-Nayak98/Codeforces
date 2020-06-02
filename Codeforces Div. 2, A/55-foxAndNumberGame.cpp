/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 25-May-20
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cstring>
#include <cstdio>
#include <climits>
#include <cmath>

typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long ull;

#define mod 1e9+7
#define PI 3.14159265359
#define ss second
#define ff first
#define pb push_back
#define mp make_pair
#define vi std::vector <int>
#define endl "\n"

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int n, max, input;
    int freq[101];
    vi arr;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.pb(input);
    }

    std::memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= sqrt(arr[i]); ++j) {
            if (arr[i] % j == 0) {
                ++freq[j];
                if(arr[i]/j != j)
                    ++freq[arr[i]/j];
            }
        }
    }

    for (int i = 1; i < 101; ++i) {
        if(freq[i] == n)
            max = i;
    }

    std::cout << max * n << endl;
    return 0;
}

