/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 29-May-20
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

    std::string str1, str2;
    int count, freq1[26], freq2[26];

    std::cin >> str1 >> str2;

    std::memset(freq1, 0, sizeof(freq1));
    std::memset(freq2, 0, sizeof(freq2));
    count = 0;
    if (str1.size() != str2.size()) {
        std::cout << "NO" << endl;
        std::exit(0);
    }
    else
        for (int i = 0; i < str1.size(); ++i) {
            ++freq1[str1[i]-'a'];
            ++freq2[str2[i]-'a'];

            if(str1[i] != str2[i])
                ++count;
        }

    for (int i = 0; i < 26; ++i) {
        if (freq1[i] != freq2[i]) {
            std::cout << "NO" << endl;
            std::exit(0);
        }
    }

    if (count > 2)
        std::cout << "NO" << endl;
    else
        std::cout << "YES" << endl;
    return 0;
}

