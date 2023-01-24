// https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
		vector<vector<int>> sortedMatrix(vector<vector<int>>matrix,int n){
			priority_queue<int,vector<int>,greater<int>>p;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					p.push(matrix[i][j]);
				}
			}
			int r=0,c=0;
			while(!p.empty()){
				matrix[r][c]=p.top();
				c++;
				if(c==n){
					r++;
					c=0;
				}
				p.pop();
			}
			return matrix;
		}
};
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
		Solution obj;
		matrix=obj.sortedMatrix(matrix,n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
		}
	return 0;
}
