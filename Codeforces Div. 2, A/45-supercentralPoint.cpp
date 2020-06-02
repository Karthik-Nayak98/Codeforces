/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 23-May-20
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
#define mp std::make_pair
#define vi std::vector <int>
#define endl "\n"

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int n, a, b, value, count;
    std::vector<std::pair<int, int>> arr;

    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b;
        arr.pb(mp(a,b));
    }

    value = 0;
    for (int i = 0; i < n; ++i) {
        bool up, down, left, right;
        up = false, down = false, left = false, right = false;
        count = 0;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if((arr[i].ff-1 < arr[j].ff) && (arr[i].ss == arr[j].ss) && !left) {
                    ++count;
                    left = true;
                }
                if((arr[i].ff+1 > arr[j].ff) && (arr[i].ss == arr[j].ss) && !right) {
                    ++count;
                    right = true;
                }
                if((arr[i].ff == arr[j].ff) && (arr[i].ss+1 > arr[j].ss) && !up) {
                    ++count;
                    up = true;
                }
                if((arr[i].ff == arr[j].ff) && (arr[i].ss-1 < arr[j].ss) && !down) {
                    ++count;
                    down = true;
                }
            }
        }
        if (count == 4) 
            ++value;
    }
    std::cout << value << endl;
    return 0;
}

