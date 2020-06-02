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
    
    lli k, l, pow, count;

    std::cin >> k >> l;

    count = 0;
    pow = 1;
    while (pow < l) {
        pow *= k;
        ++count;
    } 

    if (pow == l) {
        std::cout << "YES" << endl;
        std::cout << count - 1 << endl;
    }

    else
        std::cout << "NO" << endl;
    return 0;
}

