/*//calculate the sum of elements from a given array

#include <iostream>
using namespace std;
int sum=0;
int main(){
    int array[]={3,4,10,11};
    for(int index=0;index<4;index++){
        //cout<<array[index]<<endl;
        sum+=array[index];
        
    }    
    cout<<sum<<endl;
    return 0;
}*/


//Find the maximum element from the array
/*#include <iostream>
using namespace std;
int main(){
    int array[]={3,7,18,9,11};
    int max=array[0];
    for(int i=0;i<5;i++){
        if (array[i] > max) { // Compare array[i] with max
            max = array[i]; // Update max if array[i] is greater
        }
    }

    cout << "Maximum element: " << max << endl;



    return 0;
} */



//searching if the elemnt is present in an array or not, if it is not present then return -1 else return index.

#include <iostream>
using namespace std;

int main() {
    int array[] = {3, 7, 18, 9, 11};
    int key = 11;
    int ans = -1; // Initialize ans to -1

    for (int i = 0; i < 5; i++) {
        if (array[i] == key) { // Compare array element with key
            ans = i; // Store the index in ans
            break; // Exit the loop once the element is found
        }
    }

    cout << "Index: " << ans << endl;

    return 0;
}

