/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 12-May-20
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

    int n, index;

    std::cin >> n;
    
    if ((n & 1) == 1) {
        std::cout << -1 << endl;
        std::exit(0);
    }else {
        for (int i = 1; i < n+1; ++i) {
            if(i & 1)
                std::cout << i+1 << " ";
            else
                std::cout << i-1 <<" ";
        }
    }
    std::cout << endl;
    return 0;
}

