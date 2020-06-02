/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 05-May-20
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <cstdio>
#include <climits>

typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long ull;

#define mod 1e9+7
#define PI 3.14159265359
#define ss second
#define ff first
#define pb push_back
#define vi std::vector <int>
#define endl "\n"

int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int n, x, y, z, sumX, sumY, sumZ;

    std::cin >> n;

    sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> x >> y >> z;
        sumX+=x, sumY+=y, sumZ+=z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
    return 0;
}

