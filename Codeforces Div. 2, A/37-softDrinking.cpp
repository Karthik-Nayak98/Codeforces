/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 10-May-20
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

    int n, k, l, c, d, p, nl, np, mini, totSlice, totSoftDrink, totSalt;

    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    totSlice = c * d;
    totSoftDrink = (k * l)/nl;
    totSalt = p / np;

    mini = std::min(totSlice, std::min(totSoftDrink, totSalt));

    std::cout << mini / n << endl;
    return 0;
}

