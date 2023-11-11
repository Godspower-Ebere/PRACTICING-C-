#include <iostream>
using namespace std;
int main()
{
	string ans  ,age  ;
	cout<<"what is your name: ";
	cin>>ans;
	cout<<ans<< " how old are you? ";
	cin>>age;
	int age1=stoi(age);
	cout<<age1<<"!!"<<" wow you are now a big guy "<<ans;
	int year=2023 -age1;
	cout<<" \nand you were born "<<year;
}