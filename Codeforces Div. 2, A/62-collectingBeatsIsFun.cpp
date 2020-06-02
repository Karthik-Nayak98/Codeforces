/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 27-May-20
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

    int k;
    std::string input;
    int freq[11];

    std::cin >> k;

    std::memset(freq, 0, sizeof(freq));

    for (int i = 0; i < 4; ++i) {
        std::cin >> input;
        for (int j = 0; j < 4; ++j) {
            if(input[j] != '.')
                ++freq[input[j]-'0'];
        }
    }
    
    for (int i = 1; i < 10; ++i) {
        if (freq[i] > 2*k) {
            std::cout << "NO" << endl;
            std::exit(0);
        }
    }

    std::cout << "YES" << endl;
    return 0;
}

