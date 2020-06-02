/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 09-May-20
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

    int n;
    std::string input;
    std::cin >> n;
    char arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }    
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int count = 0;
            if(j+1 < n)
                if (arr[i][j+1] == 'o')
                    ++count;
            if(i+1 < n)
                if (arr[i+1][j] == 'o')
                    ++count;
            if(i-1 >= 0)
                if (arr[i-1][j] == 'o')
                    ++count;
            if(j-1 >= 0)
                if (arr[i][j-1] == 'o')
                    ++count;
            if ((count & 1) == 1) {
                std::cout << "NO" << endl;
                std::exit(0);
            }
        }
    }

    std::cout << "YES" << endl;
    return 0;
}

