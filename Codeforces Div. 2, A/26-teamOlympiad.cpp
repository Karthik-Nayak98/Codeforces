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

    int n, oneCount, twoCount, threeCount, mini, input;
    vi arr1, arr2, arr3;

    std::cin >> n;

    oneCount = 0, twoCount = 0, threeCount = 0;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        if (input == 1) {
            ++oneCount;
            arr1.pb(i+1);
        }
        else if(input == 2) {
            ++twoCount;
            arr2.pb(i+1);
        }
        else {
            ++threeCount;
            arr3.pb(i+1);
        }
    }

    mini = std::min(oneCount, std::min(twoCount, threeCount));
    if(oneCount == 0 || twoCount == 0 || threeCount == 0)
        std::cout << 0 << endl;
    else {
        std::cout << mini << endl;
        for (int i = 0; i < mini; ++i) {
            std::cout << arr1[i] <<" "<< arr2[i] <<" "<< arr3[i] << endl;
        }
    }
    return 0;
}

