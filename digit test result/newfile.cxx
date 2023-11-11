#include <iostream>
using namespace std;
int main(){
	char txt[]="";
	string name ;
	int c=0;
	bool yes=false;
	cout<<"what is your name : ";
	cin>>name;
	cout<<name <<" enter a number: ";
	cin>>txt;
	while(true){
		c++;
		if (c>sizeof(txt))c=0;
		if (isdigit(txt[c])) yes=true;
		if (yes==true){
			int num=stoi(txt);
			if (num%2==0){
				cout<<num<<" is a even number";
				break;
			}
			else {
			cout<< num<< " is a odd number";
			break;
			}
		}
		else{
			cout<<"i told you to enter a number";
			break;
		}
	}
}