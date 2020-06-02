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

    int totSeller, amt, input, k, count;
    int seller[51];

    std::cin >> totSeller >> amt;
    
    std::memset(seller, 0, sizeof(seller));
    count = 0;
    for (int i = 0; i < totSeller; ++i) {
        std::cin >> k;
        for (int j = 0; j < k; ++j) {
            std::cin >> input;
            if (amt > input) {
                seller[i+1] = 1;
            }
        }
    }

    for (int ch : seller) {
       if(ch == 1) 
           ++count;
    }

    std::cout << count << endl;
    for (int i = 0; i < 51; ++i) {
        if ( seller[i] == 1 )
            std::cout << i <<" ";
    }
    std::cout << endl;
    return 0;
}

