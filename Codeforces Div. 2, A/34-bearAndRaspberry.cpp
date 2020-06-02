/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 09-May-20
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

    int n, c, input, maxRaspberry, value;
    vi arr;

    std::cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.pb(input);
    }
    maxRaspberry = 0;
    for (int i = 0; i < n-1; ++i) {
        if (arr[i] > arr[i+1]) {
            value = arr[i]-arr[i+1]-c;
            maxRaspberry = std::max(maxRaspberry, value);
        }
    }
    std::cout << maxRaspberry << endl;
    return 0;
}

