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

    int arr[5][5];
    int row, col;

    for (int i = 0; i < 5; ++i) {
       for (int j = 0; j < 5; ++j) {
           std::cin >> arr[i][j];
           if (arr[i][j] == 1) {
              row = i+1, col = j+1; 
           }
       } 
    }
    std::cout << abs(3-row) + abs(3-col) << endl;
    return 0;
}

