//Find the total number of pairs in the array whose sum is equal to the given value x.
/*#include <iostream>
using namespace std;
int main(){
    float array[]={3.4,6,7,1};
    int targetsum=8;
    int pairs=0;
    int size=5;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;


    return 0;
}*/

//Count the number of triplets whose sum is equal to the given value of x
/*#include <iostream>
using namespace std;
int main(){
    int array[]={3,1,2,4,0,6};
    int targetsum = 5;
    int size = 6;
    int triplets=0;
    for(int i =0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;
    return 0;
}*/

//Find the unique number from the given array where all the elements are being repeated twice with one value being unique.
/*#include <iostream>
using namespace std;
int main(){
    int array[]={2,3,1,3,2,4,1,4,5};
    int size=9;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    
    for(int i=0;i<size;i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }
    return 0;
}*/

//Find the second largest element in the given array.
#include <iostream>
using namespace std;
int largestElementIndex(int array[],int size){
    int max=-1;
    int maxindex=-1;
    for(int i =0;i<size ;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int array[]={2,3,5,7,6,1};
    int indexoflargest = largestElementIndex(array,6);
    cout<<array[indexoflargest]<<endl;
    int indexofsecondlargest = array[largestElementIndex(array,6)];
    cout<<indexofsecondlargest<<endl;
    return 0;
}