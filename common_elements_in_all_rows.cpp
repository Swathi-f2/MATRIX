#include <bits/stdc++.h>
using namespace std;
void commonelements(vector<vector<int>>v,int m,int n){
    unordered_map<int,int>um;
    for(int i=0;i<n;i++){
        um[v[0][i]]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
        	if(um[v[i][j]]==i){
            	um[v[i][j]]=i+1;
            if(i==m-1 && um[v[i][j]]==m)
            	cout<<v[i][j]<<" ";
            }
        }
    }
    return ;
}
int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v(m);
    for(int i=0;i<m;i++){
    	v[i].assign(m,0);
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
     
    commonelements(v,m,n);
     
	return 0;
}
