/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 04-May-20
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

    std::string str;

    std::cin >> str;

    int len = str.size();
    for (int i = 0; i < len; ++i) {
        char chr = tolower(str[i]);
        if (chr != 'a' && chr != 'i' && chr != 'e' && chr != 'o' && chr != 'u' && chr != 'y') 

            std::cout << '.' << chr; 
    }
    std::cout << endl;
    return 0;
}

