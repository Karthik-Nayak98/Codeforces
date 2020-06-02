/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 25-May-20
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

    std::string s,t;
    int j;

    std::cin >> s >> t;

    j = 0;
    for (ui i = 0; i < t.size(); ++i) {
        if(s[j] == t[i])
            ++j;
    }

    std::cout << j+1 << endl;
    return 0;
}

