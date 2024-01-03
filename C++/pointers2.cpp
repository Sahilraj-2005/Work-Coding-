/*#include <iostream>
using namespace std;
//Call by value
void swap(int x, int y){
    int temp = x;
    x = y;
    y=temp;
}
int main(){
    int x = 10;
    int y = 20;

    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}

#include <iostream>
using namespace std;
//Call by Reference
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
int main(){
    int x = 10;
    int y = 20;

    int *p1 = &x;
    int *p2 = &y;
    swap(p1 , p2);
    cout<<x<<" "<<y<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;

void findFirstAndLastIndex(string s, char ch, int *First, int *Last){
    for(int i = 0; i< s.size() ;i++ ){
        if(s[i] ==ch){
            *First = i;
            break;
        }
    }

    for(int i = s.size()-1; i>=0 ;i-- ){
        if(s[i] ==ch){
            *Last = i;
            break;
        }
    }
}
int main(){
    string s = "aaabac";
    char ch = 'a';
    int First = -1;
    int Last = -1;
     
    int *pf = &First;
    int *pl = &Last;

    findFirstAndLastIndex(s, ch, pf, pl);

    cout<<*pf<<" "<<*pl<<endl;
    cout<<First<<" "<<Last<<endl;
    return 0;
}