#include <iostream>
using namespace std;
int main(){
int c=0;
int sum=0;
for (int i=0; i<=1000; i++){
    if (i%3==0){
            int three=i;
        if (i%5==0){
            int five=i;
            cout<<five<<" can be divide by 3 and 5"<<endl;
            c++;
            sum+=five;
            if (c>=5){
                break;
            }
        }
    }
}
cout<<"The Total OF Those Number That can be divide by 3 and 5 is "<<"'"<<sum<<"'"<<endl;
}
