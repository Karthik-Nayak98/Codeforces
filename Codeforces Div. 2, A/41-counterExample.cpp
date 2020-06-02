/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 23-May-20
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

    lli left, right;

    std::cin >> left >> right;

    for (lli i = left; i <= right; ++i) {
        if ((i & 1) == 0 && i+2 <= right) {
            std::cout << i << " " << i+1 << " " << i+2 << endl;
            std::exit(0);
        }
    }
    
    std::cout << -1 << endl;
    return 0;
}

