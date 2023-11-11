#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> num={1,2,3,4,5};
int small=num[0];
int large=num[0];
for (int i=0; i<5; i++ ){
    if (num[i]>small) small=num[i];
    if (num[i]<large) large=num[i];
}
cout<<small<<" and "<<large;
}
