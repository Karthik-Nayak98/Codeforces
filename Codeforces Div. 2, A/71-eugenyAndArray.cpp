/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 29-May-20
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

    int n, m, neg, pos, left, right, minimum, input;
    vi prefixSum;

    std::cin >> n >> m;
    
    neg = 0, pos = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        if (input == 1)
            ++pos;
        else 
            ++neg;
    }

    minimum = std::min(neg, pos);
    while (m--) {
        std::cin >> left >> right;
        int diff = right - left + 1;
        if ((diff & 1) == 0) {
            if (minimum >= diff/2)
                std::cout << 1 << endl;
            else
                std::cout << 0 << endl;
        }else
            std::cout << 0 << endl;
    }
    return 0;
}

