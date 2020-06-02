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

    std::string input;
    lli value, temp, leftWeight, rightWeight;
    bool flag;

    std::cin >> input;

    for (lli i = 0; i < input.size(); ++i) {
        if (input[i] == '^') {
            value = i;
            break;
        }
    }

    flag = false;
    temp = value;
    leftWeight = 0, rightWeight = 0;
    for (lli i = 0; i < input.size(); ++i) {
        if(input[i] == '^')
            flag = true;

        if (flag == false && input[i] != '=')
            leftWeight += (input[i]-'0') * value;
        --value;

        if (flag == true && input[i] != '=')
            rightWeight += (input[i]-'0') * (i-temp);
    }

    if(rightWeight == leftWeight)
        std::cout << "balance" << endl;
    else if(rightWeight > leftWeight)
        std::cout << "right" << endl;
    else
        std::cout << "left" << endl;
    return 0;
}

