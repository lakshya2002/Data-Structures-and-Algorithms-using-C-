#include <iostream>
using namespace std;
int main(){
	
	//Ques-1
	/*
	int a,b=1;
	a=10;
	if(++a){
		cout<<b;
	}
	else{
		cout<<++b;
	}
	*/
	
	
	//Ques-2
	/*
	int a=1;
	int b=2;
	if(a-- >0 && ++b>2){
		cout<<"inside if";
	}
	else{
		cout<<"inside else";
	}
	cout<<a<<" "<<b;
	*/
	
	//Ques-3
	/*
	int a=1;
	int b=2;
	if(a-- >0 || ++b>2){
		cout<<"inside if";
	}
	else{
		cout<<"inside else";
	}
	cout<<a<<" "<<b;
	*/
	
	//Ques-4
	/*
	int num =3;
	cout<<(25*(++num));
	*/
	
	//Ques-5
	
	int a=1;
	int b =a++;
	int c = ++a;
	cout<<b;
	cout<<c;
}
