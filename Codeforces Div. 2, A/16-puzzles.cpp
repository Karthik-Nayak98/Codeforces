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

typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long ull;

#define mod 1e9+7
#define PI 3.14159265359
#define ss second
#define ff first
#define pb push_back
#define vi std::vector<int>
#define endl "\n"

int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int n, m, input, mini, value;
    vi puzzle;

    std::cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        std::cin >> input;
        puzzle.pb(input);
    }

    std::sort(puzzle.begin(), puzzle.end());
    mini = 9999;

    for (int i = 0; i <= m-n; ++i) {
        value = puzzle[n+i-1] - puzzle[i];
        mini = std::min(mini, value);
    }
    std::cout << mini << endl;
    return 0;
}

