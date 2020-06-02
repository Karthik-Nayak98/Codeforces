/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 05-May-20
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cstring>
#include <cstdio>
#include <climits>
#include <utility>

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

    int n, host, guest, count;
    std::cin >> n;
    std::map<int, std::pair<int, int>> mp;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> host >> guest;
        mp.insert(std::make_pair(i,std::make_pair(host, guest)));
    }
    count = 0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr){
        for (auto j = mp.begin(); j != mp.end(); ++j){
            if (itr->ff != j->ff) {
                if((itr->ss).ff == (j->ss).ss)
                    ++count;
            }
        }
    }
    std::cout << count << endl;
    return 0;
}

