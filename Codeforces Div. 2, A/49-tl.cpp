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

    int n, m, input, totCount, min, maxTl;
    vi correct, wrong;

    std::cin >> n >> m;
   
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        correct.pb(input);
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> input;
        wrong.pb(input);
    }

    min = 999, maxTl = -1;
    for (int i = 0; i < n; ++i) {
        if (min > correct[i])
            min = correct[i];

        if(maxTl < correct[i])
            maxTl = correct[i];
    }

    while ((2*min) > maxTl) 
        ++maxTl;
    
    totCount = 0;
    for (int i = 0; i < m; ++i) {
        if(maxTl >= wrong[i])
            ++totCount;
    }

    if ((totCount > 0)) {
        std::cout << -1 << endl;
        std::exit(0);
    }
    
    std::cout << maxTl << endl;
    return 0;
}

