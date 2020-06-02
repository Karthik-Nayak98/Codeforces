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
#define vi std::vector <int>
#define endl "\n"

int main(){
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int a, b, c;

    std::cin >> a >> b >> c;
    
    if ((a==1 && b==1 && c==1) || (a==1 && c==1)) {
       std::cout << a+b+c << endl; 
    }else if (a==1) {
        std::cout << (a+b)*c << endl;
    }else if (b==1) {
        int mini = std::min(a, c);
        int maxi = std::max(a, c);
        std::cout << (mini+b)*maxi << endl;
    }else if (c==1) {
        std::cout << a*(b+c) << endl;
    }else {
        std::cout << a*b*c << endl;
    }
    return 0;
}

