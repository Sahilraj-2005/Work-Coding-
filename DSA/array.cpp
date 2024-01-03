#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    //cout<<sizeof(array)<<endl;
    //cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size=sizeof(array)/sizeof(array[0]);

    //FOr Loop
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
    
    //For each Loop
    for(int ele:array){
        cout<<ele<<endl;
    }
    //While loop
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }
    /*int array2[4];
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    cout<<array[4]<<endl;
    cout<<array[5]<<endl;*/

    return 0;

}