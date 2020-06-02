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

    int n, input, maxDist, diff, index, minDist;
    vi arr;
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.pb(input);
    }

    index = 1, minDist = 99999;
    for (int i = 1; i < n-1; ++i) {
        int x = 0;
        maxDist = 0;
        for (int j = 1; j < n; ++j) {
            if(j != index) {
                diff = abs(arr[j] - arr[x]);
                maxDist = std::max(diff, maxDist);
                ++x;
            }
            if(x == index)
                ++x;
        }
        ++index;
        minDist = std::min(maxDist, minDist);
    }
    maxDist = std::min(maxDist, minDist);
    std::cout << minDist << endl;
    return 0;
}

