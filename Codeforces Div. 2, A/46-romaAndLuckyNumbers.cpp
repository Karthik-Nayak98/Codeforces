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

    lli n, k, input, rem, lucky, count;
    std::vector<lli> arr;

    std::cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.pb(input);
    }

    lucky = 0;
    for (lli ch : arr) {
        count = 0;
        while (ch != 0) {
            rem = ch % 10;
            if((rem == 4) || (rem == 7))
                ++count;
            ch = ch /10;
        }
        if (count <= k)
            ++lucky;
    }

    std::cout << lucky << endl;
    return 0;
}

