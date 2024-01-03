#include <iostream>;
using namespace std;
int main(){
    int num1 = 5;
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;
    int num2 = 4;
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;

    int a= 4;
    cout<<sizeof(a)<<endl;
    char name='a';
    cout<<sizeof(name)<<endl;

    bool flag;
    a==name? flag=true:flag= false;
    cout<<flag<<endl;


    cout<<(&a)<<endl;

    cout<<(++a)<<endl;

    int b=5;
    cout<<(--b)<<endl;

    int c=6;
    cout<<(c++)<<endl;
    int d=c+5;
    cout<<(d)<<endl;

    cout << to_string(2 + 4) + "sah" << endl;
    cout << "sah" + to_string(2) + to_string(4) << endl;

    return 0;
}