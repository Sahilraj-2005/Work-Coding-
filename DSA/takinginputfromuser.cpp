#include <iostream>
using namespace std;
int main(){
    char vowels[5];
    //For Loop
    /*for(int index=0;index<5;index++){
        cin>>vowels[index];
    }
    


    for(int index=0;index<5;index++){
        cout<<vowels[index]<<" ";
    }*/
    

    //For Each Loop
    for(char &element:vowels){
        cin>>element;

    }
    
    for(int index=0;index<5;index++){
        cout<<vowels[index]<<" ";
    }

    return 0;
}