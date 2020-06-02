/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 08-May-20
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

    int row, col;
    bool flag = true;

    std::cin >> row >> col;

    for (int i = 1; i <= row; ++i) {
        if ((i & 1) == 1) {
            for (int j = 0; j < col; ++j) {
                std::cout << "#";
            }
            std::cout << endl;
        }
        else {
            if (flag == true){
                for (int j = 0; j < col-1; ++j) {
                    std::cout << ".";
                }
                std::cout << "#";
                flag = false;
            }
            else {
                std::cout << "#";
                for (int j = 0; j < col-1; ++j) {
                    std::cout << ".";
                }
                flag = true;
            }
            std::cout << endl;
        }
    }
    return 0;
}

