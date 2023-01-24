// https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&m){
	int n=m.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(m[i][j],m[j][i]);
		}
	}
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
			swap(m[i][j],m[n-i-1][j]);
		}
	}
}
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<vector<int>>matrix(n,vector<int>(n));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>matrix[i][j];
			}
		}
		rotate(matrix);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	return 0;
}
