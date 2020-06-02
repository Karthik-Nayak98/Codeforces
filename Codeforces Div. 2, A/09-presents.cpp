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

    int n;
    bool flag = true;
    std::cin >> n;

    int freq[101], arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i]; 
    }
    std::memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; ++i) {
        freq[arr[i]] = i+1;
    }

    if (flag == true) {
        for (int ch : freq) {
           if(ch != 0)
               std::cout << ch <<" "; 
        }
    }
    std::cout << endl;
    return 0;
}

