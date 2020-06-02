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

   int n, min, max, minIndex, maxIndex;
	std::cin>>n;
	int bubble[n];
 
	for (int i = 0; i < n; ++i){
		std::cin>>bubble[i];
	}
 
	minIndex = -1;
	maxIndex = -1;
	min = 99999;
	max = 0;
 
	for (int i = 0; i < n; ++i){
		if(min >= bubble[i]){
			min = bubble[i];
			minIndex = i+1;
		}
 
		if(max < bubble[i]){
			maxIndex = i+1;
			max = bubble[i];
		}
	}
 
	if(minIndex == n && maxIndex == n)
		std::cout<<"0" << endl;
	else if(minIndex < maxIndex)
		std::cout<<n - minIndex + maxIndex - 1 - 1<< endl;
	else
		std::cout<<n - minIndex + maxIndex - 1<< endl;
 

    return 0;
}

