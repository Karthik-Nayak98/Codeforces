/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 10-May-20
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

    int n1, n2, first, draw, second;
    std::cin >> n1 >> n2;

    first = 0, second = 0, draw = 0;
    for (int i = 1; i < 7; ++i) {
        if(abs(n1-i) == abs(n2-i))
            ++draw;
        else if(abs(n1-i) > abs(n2-i))
            ++second;
        else
            ++first;
    }
    std::cout << first <<" "<< draw <<" "<< second << endl;
    return 0;
}

