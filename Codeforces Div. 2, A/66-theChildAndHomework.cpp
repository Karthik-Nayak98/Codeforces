/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 28-May-20
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

    int count;
    char ch;
    std::string input;
    vi len;

    for (int i = 0; i < 4; ++i) {
        std::cin >> input;
        len.pb(input.size()-2);
    }

    count = 0;
    for (int i = 0; i < 4; ++i) {
        int countMax = 0, countMin = 0;
        for (int j = 0; j < 4; ++j) {
            if(i != j) {
                if( len[i] >= 2*len[j] )
                    ++countMax;
                if(2*len[i] <= len[j])
                    ++countMin;
            }
        }
        if (countMin == 3 || countMax == 3) {
            ++count;
            ch = char(i+'A');
        }
    }
    
    if (count == 1) 
        std::cout << ch << endl;
    else
        std::cout << 'C' << endl;

    return 0;
}

