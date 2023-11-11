#include <iostream>
using namespace std;

int main()
{
	string a;
	cout <<"INPUT SOMETHING: ";
	cin>>a;
	for (char  i : a){
		if (isdigit(i)){
			cout<<"yes";
		}
		else cout<<"no";
	}
}