#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int t[n+1][k+1];
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                if(i==1){
                    t[1][j]=j;
                }
                else if(i>j){
                    t[i][j]=t[i-1][j];
                }
                
                else{
                    t[i][j]=100;
                    for(int k=1;k<j;k++){
                        
                        t[i][j]=min(t[i][j],1+max(t[i-1][k-1],t[i][j-k]));
                        
                    }
                }
                
            }
        }
        cout<<t[n][k]<<endl;
    }
	
	return 0;
}
