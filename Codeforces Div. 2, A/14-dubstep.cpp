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

    int len;
    std::string str, s;
    bool flag;
    std::cin >> str;

    len = str.size();
    flag = false;

    for (int i = 0; i < len;) {
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
            if(flag == true) {
                flag = false;
                s += ' ';
            }
            i+=3;
        }else {
            s += str[i];
            flag = true;
            ++i;
        }
    }
    std::cout << s << endl;
    return 0;
}

