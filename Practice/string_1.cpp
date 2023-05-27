#include <iostream>
#include<vector>
using namespace std;
int getLength(char arr[]){
	int count=0;
	for (int i=0;arr[i]!='\0';i++){
		count++;
	}
	return count;
}
char toLower(char ch){
	if(ch>='a'&&ch<='z'){
		return ch;
	}
	else{
		char temp = ch-'A'+'a';
		return temp;
	}
}
bool checkPalindrome(string s){
	int start = 0;
	int end = s.size()-1;
//	int flagstart,flagend;
	while(start<end){
		if(!isalnum(s[start])){
			start++;
		}
		else if(!isalnum(s[end])){
			end--;
		}
		else{
			if(toLower(s[start])!=toLower(s[end])){
				return false;
			}
		}
	}
	return true; //palindrome
	 
}
int main(){
	char name[20];
	cin>>name;
	cout<<"your name is : "<<name;
	cout<<endl;
	cout<<"length : "<<getLength(name)<<endl;
	
	cout<<"checkPalindrome : "<<checkPalindrome(name)<<endl;
	
	cout<<"cahracter is : "<<toLower('B')<<endl;
	cout<<"cahracter is : "<<toLower('c')<<endl;
}
