/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 28-May-20
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

    int row, col, value, finalMin, min;
    std::cin >> row >> col;

    finalMin = INT_MAX;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cin >> value;
            if(value == 1) {
                if ( (i == 0 && j == 0) || (i == row-1 && j == col-1))
                    min = 1;
                else if ( i == 0 || j == 0 || i == row-1 || j == col-1)
                    min = 2;
                else 
                    min = 4;
                if (finalMin > min) {
                    finalMin = min;
                }
            }
        }
    }

    std::cout << finalMin << endl;
    return 0;
}

