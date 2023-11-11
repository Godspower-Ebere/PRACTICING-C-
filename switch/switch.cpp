#include  <iostream>
using namespace std;
void alpha(char a);
int main(){
alpha('a');
alpha('b');
alpha('c');
alpha('d');
alpha('e');
alpha('f');
alpha('g');
alpha('h');
}
void alpha(char a){
switch (a){
case 'a':
    cout<<"Monday"<<endl;break;
case 'b':
    cout<<"Tuesday"<<endl;break;
case 'c':
    cout<<"Wednesday"<<endl;break;
case 'd':
    cout<<"Thursday"<<endl;break;
case 'e':
    cout<<"Friday"<<endl;break;
case 'f':
    cout<<"Saturday"<<endl;break;
case 'g':
    cout<<"Sunday"<<endl;break;
default:
    cout<<"No days Of the Week For That Character"<<endl;break;

}

}
