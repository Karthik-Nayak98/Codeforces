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

    int n, ind;
    std::set<int>diagonal, normalChar;
    std::string input;
    
    std::cin >> n;

    ind = 0;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        for (int j = 0; j <= n/2; ++j) {
           
            if (i == j || i==(n-j-1)) {
                diagonal.insert(input[j]);
                diagonal.insert(input[n-j-1]);
            }
            else {
                normalChar.insert(input[j]);
                normalChar.insert(input[n-j-1]);
            }
        }
    }

    char it1 = *std::next(diagonal.begin(), 0);
    char it2 = *std::next(normalChar.begin(), 0);
    
    if((diagonal.size()==1) && (normalChar.size()==1) && (it1 != it2))
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
    return 0;
}

