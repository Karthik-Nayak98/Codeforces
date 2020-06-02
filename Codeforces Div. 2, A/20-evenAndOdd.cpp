/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 06-May-20
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
#define vi std::vector <int>
#define endl "\n"

int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    lli n, k, index, half, value;

    std::cin >> n >> k;

    half = std::ceil(n/2.0);
    index = k - half;
 
    if(k <= half) {
        value = 1 + (k-1)*2; // tn = a + (n-1)*d
    } else {
        value = 2 + (index - 1)*2;  
    }

    std::cout << value << endl;
    return 0;
}

