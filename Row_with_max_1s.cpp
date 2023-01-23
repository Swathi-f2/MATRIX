// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > a, int n, int m) {
	    int i=0,j=m-1,row=-1;
	    while((i<n) && (j>=0)){
	        if(a[i][j]==1){
	            row=i;
	            j--;
	        }
	        if(a[i][j]==0){
	            i++;
	        }
	    }
	    return row;
}
};
int main() {
	 int t;cin>>t;
	 while(t--){
	 	int r,c;cin>>r>>c;
	 	vector<vector<int>> matrix(r,vector<int>(c));
	 	for(int i=0;i<r;i++){
	 		for(int j=0;j<c;j++){
	 			cin>>matrix[i][j];
	 		}
	 	}
	 	Solution obj;
	 	cout<<obj.rowWithMax1s(matrix,r,c)<<endl;
	 }
	return 0;
}
