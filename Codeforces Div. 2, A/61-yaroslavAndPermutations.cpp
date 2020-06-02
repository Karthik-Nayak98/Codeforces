/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 27-May-20
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

    int n, sum, input;
    int freq[1001];

    std::cin >> n;

    std::memset(freq, 0, sizeof(freq));

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        ++freq[input];
    }

    std::sort(freq, freq+1001);

    auto max = freq[1000];

    sum = 0;
    for (int i = 0; i < 1000; ++i) 
        sum += freq[i];

    if ( sum < max - 1 )
        std::cout << "NO" << endl;
    else
        std::cout << "YES" << endl;

    return 0;
}

