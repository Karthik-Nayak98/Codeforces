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

    int n, input, oddIndex, evenIndex, oddCount, evenCount;
    vi test;

    std::cin >> n;

    evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        if((input & 1) == 1) {
            ++oddCount;
            oddIndex = i+1;
        }
        else {
            ++evenCount;
            evenIndex = i+1;
        }
    }
    
    if (oddCount == 1)
        std::cout << oddIndex << endl;
    else
        std::cout << evenIndex << endl;
    return 0;
}

