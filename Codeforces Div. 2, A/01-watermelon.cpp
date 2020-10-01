/* CREATED BY
 * KARTHIK NAYAK
 * DATE : 04-May-20
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned int ui;
typedef unsigned long long ull;


#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1e9+7
#define PI 3.14159265359
#define ss second
#define ff first
#define pb push_back
#define vi vector <int>
#define endl "\n"

int main(){
    
    IOS    

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif

    int n;

    cin >> n;

    if (n == 2 || n % 2 == 1)
        cout << "NO" << endl;
    else    
        cout << "YES" << endl;
    return 0;
}

