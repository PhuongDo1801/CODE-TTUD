// Write a program that accepts the length and width of a rectangle 
// from the user input and displays the following information on the screen
#include<bits/stdc++.h>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    void getInformation(){
        cin>>length>>width;
    }
    double getArea(){
        return length*width;
    }
    double getPerimeter(){
        return 2*(length + width);
    }
    void display(){
        cout<<"Area: "<< getArea() << endl;
        cout<<"Perimeter: " << getPerimeter();
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}