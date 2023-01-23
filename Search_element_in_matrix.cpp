// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& ma, int target) {
        int r=ma.size(),c=ma[0].size(),start=0,end=(r*c)-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(ma[mid/c][mid%c]==target){
            return true;
            }
            else if(ma[mid/c][mid%c]<target)
            start=mid+1;
            else end=mid-1;
        }
       return false; 
    }
};
int main() {
	int t;cin>>t;
	while(t--){
		int r,c,target;cin>>r>>c;
		vector<vector<int>>matrix(r);
		for(int i=0;i<r;i++){
			matrix[i].assign(c,0);
			for(int j=0;j<c;j++){
				cin>>matrix[i][j];
			}
		}
		cin>>target;
		Solution obj;
		bool ss=obj.searchMatrix(matrix,target);
		cout<<ss<<endl;
	}
	return 0;
}
