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

    int a, b, c, d, fMaxtime, sMaxtime;

    std::cin >> a >> b >> c >> d;
    
    fMaxtime = std::max((3*a)/10, a - (a/250)*c);
    sMaxtime = std::max((3*b)/10, b - (b/250)*d);

    if (fMaxtime == sMaxtime)
        std::cout << "Tie" << endl;
    else if (fMaxtime > sMaxtime)
        std::cout << "Misha" << endl;
    else 
        std::cout << "Vasya" << endl;
    return 0;
}

