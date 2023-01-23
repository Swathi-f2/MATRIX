#include <bits/stdc++.h>
using namespace std;
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {   
        int top=0,bottom=r-1,left=0,right=c-1,dir=0,maxi=max(r,c);
        vector<int>v;
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    v.push_back(m[top][i]);
                }
                top+=1;
            }
            else if(dir==1){
                for(int i=top;i<=bottom;i++)
                v.push_back(m[i][right]);
            right-=1;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--)
                v.push_back(m[bottom][i]);
                bottom-=1;
            }
            else {
                for(int i=bottom;i>=top;i--)
                v.push_back(m[i][left]);
                left+=1;
            }
           dir=(dir+1)%4; 
        }
        return v;
    }
};
int main() {
	 int t;cin>>t;
	 while(t--){
	 	int r,c;
	 	cin>>r>>c;
	 	vector<vector<int> >matrix(r);
	 	for(int i=0;i<r;i++){
	 		matrix[i].assign(c,0);
	 		for(int j=0;j<c;j++){
	 			cin>>matrix[i][j];
	 		}
	 	}
	 	Solution obj;
	 	vector<int>result=obj.spirallyTraverse(matrix,r,c);
	 	for(int i=0;i<result.size();i++){
	 		cout<<result[i]<<" ";
	 	}
	 	cout<<endl;
	 }
	 
	return 0;
}
