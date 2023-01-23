#include <bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
class Solution{   
public:
    int median(vector<vector<int>> &m, int r, int c){
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<r;i++){
            if(m[i][0]<mini)
            mini=m[i][0];
            if(m[i][c-1]>maxi)
            maxi=m[i][c-1];
        }
        int desired=(r*c)/2;
        while(mini<=maxi){
            int mid=mini+(maxi-mini)/2;
            int count=0;
            for(int i=0;i<r;i++){
                count+=upper_bound(m[i].begin(),m[i].end(),mid)-m[i].begin();
            }
            if(count<=desired)
            mini=mid+1;
            else
            maxi=mid-1;
        }
        return mini;
        
    }
};
int main() {
	int t;cin>>t;
	while(t--){
		int r,c;cin>>r>>c;
		vector<vector<int>>matrix(r,vector<int>(c));
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>matrix[i][j];
			}
		}
		Solution obj;
		cout<<obj.median(matrix,r,c)<<endl;
	}
	return 0;
}
