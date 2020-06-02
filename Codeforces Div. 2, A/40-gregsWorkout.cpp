/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 10-May-20
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

    int n, input;
    int index[3];
    vi exercise;

    std::cin >> n;
   
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        exercise.pb(input);
    }
    std::memset(index, 0, sizeof(index));

    for (int i = 0; i < 3; ++i) {
        int count = 0;
        for (int j = i; j < n; j+=3) {
            count += exercise[j];
        }
        index[i] = count;
    }

    if((index[0] > index[1]) && (index[0] > index[2]))
        std::cout << "chest" << endl;
    else if(index[1] > index[2])
        std::cout << "biceps" << endl;
    else
        std::cout << "back" << endl;
    return 0;
}

