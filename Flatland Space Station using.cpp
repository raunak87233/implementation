#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , maxi = 0;
    cin>> n >> m;
    vector<int> c(m);
    for(int i=0 ; i<m ; i++) 
    cin >> c[i];
    sort(c.begin(), c.end());
    for(int i=0 ; i<=c[0] ; i++) 
    maxi = max(maxi, c[0]-i);
    for(int i=0 ; i<m-1 ; i++){
        for(int j = c[i] ; j<=c[i+1] ; j++) {
            maxi = max(maxi, min(j-c[i], c[i+1]-j));
        }
    }
    for(int i=c[m-1] ; i<n ; i++) 
    maxi = max(maxi, i-c[m-1]);
    cout << maxi << endl;
    return 0;
}
