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

    int n, a, b, c, maxCuts;

    std::cin >> n >> a >> b >> c;

    maxCuts = 0;
    for (int i = 0; i <= 4000; ++i) {
       for (int j = 0; j <= 4000; ++j) {
           int k = (n - (i*a + j*b))/c;
           int rem = (n - (i*a + j*b))%c;
           if(k < 0)
               break;
           if(rem == 0)
               maxCuts = std::max(maxCuts, i+j+k);
       } 
    }
    std::cout << maxCuts << endl;

    return 0;
}

