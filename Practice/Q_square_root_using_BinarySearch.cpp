#include <iostream>
using namespace std;

	int mySqrt(int x) {
        int low =0;
        int high =x;
        long long int mid = low+(high-low);
        
        long long int ans = -1;
        while(low<=high){
            long long int square = mid*mid;
            if(square==x){
                return mid;
            }
            if(square<x){
                ans=mid;
                low = mid+1;
            }
            else{
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
	
	double morePrecision(int n, int places, int intpart){
		double factor = 1;
		double ans = intpart;
		for (int i=0;i<places;i++){
			factor=factor/10;
			for(double j=ans; j*j<n;j=j+factor){
				ans=j;
			}
		}
		return ans;
	}    
int main(){
	int n;
	cin>>n;
	cout<<mySqrt(n);
	int tempsol = mySqrt(n);
	cout<<endl;
	cout<<"answer is"<<morePrecision(n,3,tempsol)<<endl;
}
