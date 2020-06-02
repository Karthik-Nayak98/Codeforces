/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 30-May-20
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

    int r1, r2, c1, c2, d1, d2, a, b, c, d;
    std::cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    
    a = (r1+c1-d2) / 2;
    b = (c1 - a);
    d = (d1 - a);
    c = (r1 - a);

    if (a != b && a != c && a != d && b != c && b != d && c != d && (a >= 1 && a <= 9) && (b >=1 && b <= 9)
           && (c >=1 && c <=9) && (d >=1 && d <= 9) && (b+d == r2) && (c+d == c2) && (c+b == d2)) {
        std::cout << a << " " << c << endl;
        std::cout << b << " " << d << endl;
    }else
        std::cout << -1 << endl;

    return 0;
}

