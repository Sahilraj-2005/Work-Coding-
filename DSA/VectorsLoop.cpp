#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector<int> v;
   //for loop
   for(int i =0; i<5;i++){
    int element;
    cin>>element;
    v.push_back(element);
    
   }
   for(int i=0; i< v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;

v.insert(v.begin()+2,6);

//For each Loop
for(int ele:v){
    cout<<ele<<" ";
}   
cout<<endl;

v.erase(v.end()-2);
//WHile loop
int idx=0;
while(idx<v.size()){
    cout<<v[idx++]<<" ";
}
cout<<endl;

    return 0;
}


//Alternate code for for_loop
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5); // Use parentheses instead of square brackets to initialize the vector

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++) { // Access v.size() instead of v[5].size()
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}