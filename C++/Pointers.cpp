//Pointers are used to store address
/*#include <iostream>
using namespace std;
int main(){
    int x = 0;
    int y = 18;
    cout<< &x << " " << &y <<endl;
    return 0;
} 
#include <iostream>
using namespace std;
int main(){
    int x=18;
    int y=0;
    //create a pointer that can store the adress of x
    //As x is a int var so we need a pointer of int data type
    int *ptr = &x;
    cout<<ptr;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int *ptr; //only declaring the pointer
    cout<<ptr<<endl;
    int marks = 10;
    ptr = &marks; //re-assignment - update
    cout<<ptr<<endl;
    return 0;
}*/
//DEREFERENCE:-
//*ptr - to access the value present in the bucket on that address

#include <iostream>
using namespace std;
int main(){
    int x = 18;
    float y = 7.13;
    int *ptr = &x;
    cout<<"Address stored inside ptr: "<<ptr<<endl;
    cout<<"Value present at the address of ptr: "<<*ptr<<endl;

    float *ptrf = &y;
    cout<<"Address stored inside ptrf: "<<ptrf<<endl;
    cout<<"Value present at the address of ptrf: "<<*ptrf<<endl;

    x=23;
    cout<<"New Updated value of x: "<<x<<endl;
    cout<<"ptr still pointing towards same memory which has 23 instead of 18: "<<*ptr<<endl;

    //updating x with the pointer
    *ptr = 50;
    cout<<"New value of x: "<<x<<endl;
    cout<<"New value pointed by ptr: "<<*ptr<<endl;

    int valueAtX = *ptr;
    cout<<valueAtX<<endl;

    return 0;
}