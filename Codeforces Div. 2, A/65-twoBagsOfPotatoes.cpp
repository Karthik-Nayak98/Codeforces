/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 27-May-20
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

    lli y, n, k, x, count;

    std::cin >> y >> k >> n;

    x = k - (y % k);

    count = 0;
    while ((x+y) <= n) {
        std::cout << x << " ";
        x += k;
        ++count;
    }
    if(count == 0)
        std::cout << -1 << endl;
    else 
        std::cout << endl;

    return 0;
}

