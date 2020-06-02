/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 04-May-20
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

    int n;

    std::cin >> n;

    if (n == 2 || n % 2 == 1)
        std::cout << "NO" << endl;
    else    
        std::cout << "YES" << endl;
    return 0;
}

