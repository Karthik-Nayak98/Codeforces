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
#define mp std::make_pair
#define vi std::vector <int>
#define endl "\n"

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int n, a, b, index;
    std::vector<std::pair<int, int>> laptop;
    std::pair<int, int> lp;

    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b;
        if ( b > a ){
            index = i;
            lp = mp(a,b);
        }
        laptop.pb(mp(a, b));
    }

    for (int i = 0; i < n; ++i) {
        if(i != index) {
            if((lp.ff < laptop[i].ff) && (lp.ss > laptop[i].ss)) {
                std::cout << "Happy Alex" << endl;
                std::exit(0);
            }
        }
    }
    std::cout << "Poor Alex" << endl;
  
    return 0;
}

