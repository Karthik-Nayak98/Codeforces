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

    int n, k, input, count;
    vi teams;

    std::cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        teams.pb(input);
    }

    std::sort(teams.begin(), teams.end());
    
    count = 0;
    for (int i = 0; i <= n-3; i+=3) {
       if ((teams[i]+k <= 5) && (teams[i+1]+k <=5) && (teams[i+2]+k <=5)) {
           ++count;
       }else
           break;
    }

    std::cout << count << endl;
    return 0;
}

