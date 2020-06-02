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
#define PI 3.14159265359
#define ss second
#define ff first
#define pb push_back
#define mp make_pair
#define vi std::vector <int>
#define endl "\n"

ui numberWithoutZero(ui n) {
    ui i, num;
    i = 0, num = 0;
    while (n != 0) {
        int rem = n % 10;
        if(rem != 0){
            num += rem * pow(10, i);
            ++i;
        }
        n /= 10;
    }
    return num;
}

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    ui first, second, sum, n, m, value;

    std::cin >> n >> m;

    sum = n + m;

    first = numberWithoutZero(n);
    second = numberWithoutZero(m);
    value = numberWithoutZero(sum);

    if ( value == (first + second) )
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;

    return 0;
}

