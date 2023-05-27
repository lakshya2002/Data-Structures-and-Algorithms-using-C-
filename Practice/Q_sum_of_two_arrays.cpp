#incluede <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
	int start = 0;
	int end = v.size()-1;

	while(start<end){
		swap(v[start++],v[end--]);
	}

	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	vector<int> ans;
	int carry = 0;
	
	while(i>=0 && j>=0){
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1+val2+carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		i--;
		j--;
	}
	// I CASE : upper wala array bda hoga.
	while(i>=0){
		int sum = a[i]+carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		i--;
	}
	// II CASE : icche wala array bda hoga.
	while(j>=0){
		int sum = b[j]+carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		j--;
	}
	// III CASE : last mai carry aai hogi.
	while(carry!=0){
		int sum = carry;
		carry = sum/10;
		int value = sum%10;
		ans.push_back(value);
		j--;
	}
	return reverse(ans);
}

int main(){
	
}
