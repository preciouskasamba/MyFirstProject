#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle RectangleObject;
    float inputlength , inputwidth;
    cout<<"enter length";
    cin>>inputlength;
    RectangleObject.setlength(inputlength);

    cout<<"enter width";
    cin>>inputwidth;
    RectangleObject.setwidth(inputwidth);
cout <<"length is:"<<RectangleObject.getlength()<<endl;
cout<<"width is:"<<RectangleObject.getwidth()<<endl;
cout<<"area is:"<<RectangleObject.calculateArea()<<endl;
return 0;
}