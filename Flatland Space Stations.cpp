#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int c[m];
for(int i=0; i<m; i++) cin>>c[i];
int ans=0;
sort(c,c+m);
if(n==1) ans=0;
else if(m==1){
ans=c[0]-0;
ans=max(ans,n-1-c[0]);
}
else if(m==1 && (c[0]==0 && c[1]==n-1)){
    ans=n/2;
    cout<<ans<<" ";
}
else{
    for(int i=0; i<m-1; i++){
        ans=max(ans,(c[i+1]-c[i])/2);
    }
    ans=max(ans,c[0]-0);
    ans=max(ans,n-1-c[m-1]);
}
    cout<<ans;
}



