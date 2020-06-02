/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 25-May-20
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

    int n, input, pos, j;
    vi arr, zeroProduct, negProduct, posProduct;
    bool flag;
    
    std::cin >> n;

    flag = false;
    pos = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        if(input > 0)
            ++pos;
        arr.pb(input);
    }

    std::sort(arr.begin(), arr.end());
    
    j = 0;
    if(pos == 0) {
        posProduct.pb(arr[0]);
        posProduct.pb(arr[1]);
        j = 2;
    }

    for (; j < n; ++j) {
        if (arr[j] == 0) 
            zeroProduct.pb(arr[j]);
        else if(arr[j] > 0)
            posProduct.pb(arr[j]);
        else if (arr[j] < 0 && flag == false) {
            negProduct.pb(arr[j]);
            flag = true;
        }
        else
            zeroProduct.pb(arr[j]);
    }

    std::cout << negProduct.size() << " ";
    for (int i = 0; i < negProduct.size(); ++i) {
        std::cout << negProduct[i] << " ";
    }
    std::cout << endl;

    std::cout << posProduct.size() << " ";
    for (int i = 0; i < posProduct.size(); ++i) {
        std::cout << posProduct[i] << " ";
    }
    std::cout << endl;

    std::cout << zeroProduct.size() << " ";
    for (int i = 0; i < zeroProduct.size(); ++i) {
        std::cout << zeroProduct[i] << " ";
    }
    std::cout << endl;
    return 0;
}

