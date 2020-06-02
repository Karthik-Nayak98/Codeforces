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

    int x, y, z;

    std::cin >> x >> y >> z;

    int side1 = sqrt((x * y) / z);
    int side2 = sqrt((x * z) / y);
    int side3 = sqrt((y * z) / x);

    std::cout << 4*(side1 + side2 + side3) << endl;
    return 0;
}

