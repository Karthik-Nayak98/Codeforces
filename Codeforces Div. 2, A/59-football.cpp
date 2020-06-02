/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 26-May-20
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

    int n;
    std::string input;
    std::map<std::string, int> team;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        ++team[input];
    }

    auto it1 = team.begin();
    auto it2 = team.rbegin();
    if( it1->ss > it2->ss)
        std::cout << it1->ff << endl;
    else
        std::cout << it2->ff << endl;
    return 0;
}

