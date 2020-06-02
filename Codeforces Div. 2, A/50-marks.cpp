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

    int n, m, count;
    std::cin >> n >> m;

    int best[n];
    std::vector<std::string> arr(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::memset(best, 0, sizeof(best));

    for (int subject = 0; subject < m; ++subject) {
        char isBest = '0';
        for (int i = 0; i < n; ++i) {
            if(arr[i][subject] > isBest)
                isBest = arr[i][subject];
        }

        for (int j = 0; j < n; ++j) {
            if(arr[j][subject] == isBest)
                best[j] = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; ++i) {
        if(best[i] == 1)
            ++count;
    }

    std::cout << count << endl;
    return 0;
}

