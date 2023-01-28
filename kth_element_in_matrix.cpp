// https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX],int k,int n){
	int low=mat[0][0],high=mat[n-1][n-1],desired=k-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		int count=0;
		for(int i=0;i<n;i++){
			count+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];
		}
		if(count<=desired)
		low=mid+1;
		else
		high=mid-1;
	}
	return low;
}
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>mat[i][j];
			}
		}
		int k;cin>>k;
		cout<<kthSmallest(mat,k,n)<<endl;
	}
	return 0;
}
