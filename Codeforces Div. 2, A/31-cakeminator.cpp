/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 09-May-20
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
typedef unsigned int ui;how to store 10^18 in data type
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

    int row, col, count, rowCount, colCount;
    int index[11];
    bool flag;
    std::string input;
    
    std::cin >> row >> col;

    std::memset(index, 0, sizeof(index));
    
    rowCount = 0, colCount = 0, count = 0;
    for (int i = 0; i < row; ++i) {
        flag = true;
        std::cin >> input;
        for (int j = 0; j < col; ++j) {
            if(input[j] == 'S'){
                ++index[j+1];
                flag = false;
            }
        }
        if (flag == true) {
           ++rowCount;
           count += col;
        }
    }

    for (int i = 1; i <= col; ++i) {
        if (index[i] == 0) {
            ++colCount;
            count += row;
        }
    }
    count -= (rowCount * colCount); 
    std::cout << count << endl;
    return 0;
}

