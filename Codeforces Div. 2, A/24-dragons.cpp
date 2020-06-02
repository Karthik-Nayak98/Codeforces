/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 07-May-20
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
#include <utility>

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

    int s, n, x, y;
    bool flag = true;
    std::vector<std::pair<int, int>> dragon;
    std::cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> x >> y;
        dragon.pb(std::mp(x,y));
    }

    std::sort(dragon.begin(), dragon.end());
    
    for (int i = 0; i < n; ++i) {
        if(s > dragon[i].ff)
            s += dragon[i].ss;
        else{
            flag = false;
            break;
        }
    }
    if (flag == true)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;

    
    return 0;
}

