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

    int n, sum, maxValue, count;

    std::cin >> n;

    int arr[n];

    sum = 0, maxValue = 0, count = 0;

    for (int i = 0; i < n; ++i) {
       std::cin >> arr[i];
       sum+= arr[i];
    }
    
    std::sort(arr, arr + n, std::greater<int>());

    for (int i = 0; i < n; ++i) {
        maxValue += arr[i];
        ++count;
        if(maxValue > sum/2)
            break;
    }
    std::cout << count << endl;
    return 0;
}

