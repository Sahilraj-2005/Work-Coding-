#include <iostream>
using namespace std;
int main(){
    int a;
    cin>> a;
    if (a%2==0){
        cout<<"Entered number is even"<<endl;

    } else{
        cout<<"Entered number is odd"<<endl;

    }
    int num;
    cin>>num;
    num%2==0? cout<<"pass"<<endl:cout<<"Fail"<<endl;  //turnary operator


    return 0;
}