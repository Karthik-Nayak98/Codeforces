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

int findEight(lli n) {
    while(n != 0){
        int rem = n % 10;
        if (rem == 8)
           return 1;
        n /= 10;
    }
    return 0;
}
int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    lli floor, count;

    std::cin >> floor;

    count = 0;

    for (int i = 1; i <= 20; ++i) {
        floor += 1;

        ++count;
        if(findEight(abs(floor))) {
            std::cout << count << endl;
            break;
        }
    }
    return 0;
}

