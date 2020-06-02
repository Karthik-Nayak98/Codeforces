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

    int n, input1, input2, sumUpper, sumLower, minCount;
    vi upper, lower;

    std::cin >> n;

    sumUpper = 0, sumLower = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> input1 >> input2;
        upper.pb(input1);
        lower.pb(input2);
        sumUpper += input1;
        sumLower += input2;
    }

    if(((sumUpper & 1) == 0) && ((sumLower & 1) == 0)) {
        std::cout << 0 << endl;
        std::exit(0);
    }

    minCount = 100;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        int tempUpper = sumUpper;
        int tempLower = sumLower;
        for (int j = i; j < n; ++j) {
            tempUpper -= upper[j];
            tempUpper += lower[j];

            tempLower -= lower[j];
            tempLower += upper[j];
            ++count;
            if(((tempLower & 1)==0) && ((tempUpper & 1) == 0)) {
                if(minCount > count)
                    minCount = count;
            }
        }
    }

    if (minCount != 100)
        std::cout << minCount << endl;
    else
        std::cout << -1 << endl;
    return 0;
}

