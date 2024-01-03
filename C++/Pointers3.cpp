//Types of Pointers
//Wild pointer
/*#include <iostream>
using namespace std;
int main(){
    int *ptr;  //Declared but not initialized
    cout<<ptr<<" "<<*ptr<<endl;
    return 0;
}

//0 is special reserved memory address in many Os
//Null Pointer
#include <iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    int *p1=0;
    int *p2 ='\0';
    cout<<ptr<<" "<<endl;  //Printing *ptr will give runtime error and the program will terminate
    cout<<p1<<" "<<endl;
    cout<<p2<<" "<<endl;
    return 0;
}

//Dangling pointer :- point towards the bucket in the memory which doesnot exist
#include <iostream>
using namespace std;
int main(){
    int *ptr = NULL;
    {
        int x =10;
        ptr = &x;
    }

    cout<<ptr;
    return 0;
}*/

//Void pointer:- it can point towards any data type value
//note- can not be dereffered directly
#include <iostream>
using namespace std;
int main(){
    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;
    int *integerPointer = (int *)ptr; //Type Casting
    cout<<*integerPointer<<endl;
    return 0;
}