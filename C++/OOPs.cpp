/*#include <iostream>
using namespace std;
class Fruit{
public:                                         //For making the class public
    string Name;
    string color;
};

int main(){
    Fruit Apple;        //Object
    Apple.Name = "Mango";
    Apple.color = "Yellow";
    cout<<Apple.Name<<"-"<< Apple.color<<endl;

    //Creating objects using new keywords
    //New keywords will give us pointer object

    Fruit *Banana = new Fruit();
    Banana->Name = "Mango";
    Banana->color = "Yellow";
    cout<<Banana->Name<<"-"<<Banana->color<<endl;
    return 0;
}

//CONSTRUCTORS
#include <iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;
    Rectangle(){    //Default constructor-no argument passed
    l=0;
    b=0;
    }  

    Rectangle(int x ,int y){    //parameterised constructor-Argument passed
    l=x;
    b=y;
    }

    Rectangle(Rectangle & r){ //Copy constructor - initialising an object by another existing object
        l = r.l;
        b = r.b;
    }

    ~Rectangle(){     //destructor
        cout<<"Distructor Function is called"<<endl;
    }
};

int main(){
    Rectangle*r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;  //Delete is only used for pointer variable

    Rectangle r2( 3, 5);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;


    return 0;
}


//Encapsulation
#include <iostream>
using namespace std;

class ABC{
    int x;
    public:
    void set(int n){  //we use other functions to get the data from that class
        x = n; 
    }
    int get(){
        return x;
    }
}; 

int main(){

    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl; 
    return 0;
}

#include <iostream>
using namespace std;

class Parent{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class Child1: public Parent{
    //x will remain public
    //y will remain protected
    //z will not be accessible
};

class Child2: protected Parent{
    //x will remain protected
    //y will remain protected
    //z will inaccessible
};

class Child3: private Parent{
    //x will remain private
    //y will remain private
    //z will inaccessible
};

int main(){
    Parent p;
    p.x;
    
    return 0;
};*/

//Single Inheritance
#include <iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"this is a Parent Class"<<endl;
    }
};

class child:public Parent{
public:
    child(){
        cout<<"this is a chirl class"<<endl;
    }
};

int main(){
    child c;
    return 0;
}




