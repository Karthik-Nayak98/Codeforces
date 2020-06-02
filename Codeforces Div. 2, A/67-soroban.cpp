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

    int n;
    std::cin >> n;
    
    if(n==0)
        std::cout << "O-|-OOOO" << endl;
    while (n != 0) {
        int digit = n % 10;
        int rem = digit;
        if(digit >= 5) {
            std::cout << "-O";
            rem = (digit - 5);
        }
        else
            std::cout << "O-";
        
        if(rem == 1)
            std::cout << "|O-OOO" << endl;
        else if (rem == 2)
            std::cout << "|OO-OO" << endl;
        else if (rem == 3)
            std::cout << "|OOO-O" << endl;
        else if (rem == 4)
            std::cout << "|OOOO-" << endl;
        else
            std::cout << "|-OOOO" << endl;
        n = n / 10;
    }
    return 0;
}

