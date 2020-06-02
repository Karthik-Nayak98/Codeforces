/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 08-May-20
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

    int n, t, timelimit, input, totSongTime, count;

    std::cin >> n >> t;
    
    totSongTime = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        totSongTime += input;
    }

    timelimit = (n-1)*10 + totSongTime;
    if (t - (timelimit + 5) >= 5) {
        count = (t - (timelimit + 5))/5;
        std::cout << 2*(n-1) + count + 1 << endl;
    }
    else if((t-timelimit) <= 4 && (t - timelimit) >= 0)
        std::cout << 2*(n-1) << endl;
    else if ((t- timelimit) == 5)
        std::cout << 2*(n-1) + 1 << endl;
    else
        std::cout << -1 << endl;
    return 0;
}

