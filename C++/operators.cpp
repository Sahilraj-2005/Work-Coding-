#include <iostream>
using namespace std;
int main(){
    int a=2;
    int b=3;

    cout <<a+b<<endl;
    cout <<a-b<<endl;
    cout <<a%b<<endl;
    cout << a++<<endl;
    cout << b-- <<endl;
    cout <<a/b<<endl;
    cout <<a*b<<endl;

    cout <<(a>=b)<<endl;
    cout <<(a>b)<<endl;
    cout <<(a==b)<<endl;
    

    bool num1= true;
    bool num2= false;

    cout << (num1||num2)<<endl;
    cout << (num1&&num2)<<endl;
    cout << (!num1)<< endl;

    a+=60;
    cout<<a<<endl;
    b+=80;
    cout<<b<<endl;

    

    return 0;

}