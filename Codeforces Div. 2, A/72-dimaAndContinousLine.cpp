/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 30-May-20
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

    int n, input;
    bool intersect;
    vi arr;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.pb(input);
    }
    
    intersect = false;
    for (int i = 0; i < n-2; ++i) {
        for (int j = i+2; j < n-1; ++j) {
            int A = std::min(arr[i], arr[i+1]);
            int B = std::max(arr[i], arr[i+1]);
            int C = std::min(arr[j], arr[j+1]);
            int D = std::max(arr[j], arr[j+1]);

            if(A < C && C < B && B < D)
                intersect = true;
            if(C < A && A < D && D < B)
                intersect = true;
        }
    }

    if (intersect == true)
        std::cout << "yes" << endl;
    else 
        std::cout << "no" << endl;
    return 0;
}

