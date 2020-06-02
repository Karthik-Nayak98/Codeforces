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

    int n, input, ind1, ind2, diff, min;
    vi arr;
    
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.pb(input);
    }

    min = INT_MAX;
    for (int i = 0; i < n; ++i) {
            diff = abs(arr[i%n] - arr[(i+1)%n]);

        if (min > diff) {
            min = diff;
            ind1 = i % n;
            ind2 = (i+1) % n;
        }
    }

    std::cout << ind1+1 <<" "<< ind2+1 << endl;
    return 0;
}

