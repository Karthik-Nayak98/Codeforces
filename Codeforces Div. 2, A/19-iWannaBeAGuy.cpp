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

    int n, input, p;
    int freq[101];
    bool flag = true;

    std::cin >> n;

    std::memset(freq, 0, sizeof(freq));

    std::cin >> p;
    for (int i = 0; i < p; ++i) {
        std::cin >> input;
        ++freq[input];
    }
    std::cin >> p;
    for (int i = 0; i < p; ++i) {
        std::cin >> input;
        ++freq[input];
    }

    for (int i = 1; i <= n; ++i) {
        if (freq[i] == 0) {
            flag = false;
            break;
        }
    }

    if (flag == true) 
        std::cout << "I become the guy." << endl;
    else
        std::cout << "Oh, my keyboard!" << endl;
    return 0;
}

