#include <iostream>
using namespace std;

void SwapNumbers(int& numA , int& numB){
    int temp = numA;
    numA = numB;
    numB = temp;
    
}
int main(){
    int varA = 20;
    int varB = 100;
    cout<<"varA before:"<<varA<<endl;
    cout<<"varB before:"<<varB<<endl;

    SwapNumbers(varA , varB);
    cout<<"varA after:"<<varA<<endl;
    cout<<"varB after:"<<varB<<endl;
    return 0;
}