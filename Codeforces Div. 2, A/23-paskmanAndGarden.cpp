/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 07-May-20
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

    int x1, x2, y1, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (abs(x2-x1) == abs(y2-y1)) { // for opposite corner points
        std::cout << x2 <<" "<< y1 <<" "<< x1 <<" "<< y2 << endl;
    }
    else if(x1 == x2) { // for the line b/w 2 points parallel to x-axis
        std::cout << x1 + abs(y2-y1) <<" "<< y1 <<" " << x2+ abs(y2-y1) <<" "<< y2 << endl;
    }
    else if (y1 == y2) { // for the line b/w 2 points parallel to y-axis
        std::cout << x1 <<" "<< y1 + abs(x2-x1) <<" "<< x2 <<" " << y2 + abs(x2-x1) << endl;
    }
    else
        std::cout << -1 << endl;
    return 0;
}

