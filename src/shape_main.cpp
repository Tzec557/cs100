#include <iostream>
#include <cctype>
#include <limits>

#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int Getint(const string& prompt){
    int value;
    while(true){
        cout << prompt;
        if(cin >> value && value > 0){
            break;
        }
       else{
            cin.clear(); // clear error flag
	        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invaild input
            cout << "Invalid input, please enter another value."<< endl;
       }
    }
    return value;
}

int main(){
    Rectangle rect;
    Triangle tri;

    string input;
    int rect_height;
    int rect_width;
    int tri_height;
    int tri_base;

    while(true){
        cout << "Choose rectangle or triangle" << endl;
        cin >> input;
        if (input == "rectangle"){
            rect.set_height(Getint("what is the heigth of the rectangle: "));
            rect.set_width(Getint("what is the width of the rectangle: "));
            cout << "Rectangle's area is  " << rect.area() << endl;
            break;
        }
        else if(input == "triangle"){
            tri.set_height(Getint("what is the heigth of the triangle: "));
            tri.set_base(Getint("what is the base of the triangle: "));
            cout << "Triangle's area is " << tri.area() << endl;
            break;
        }
        else{
            cin.clear(); // clear error flag
	        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invaild input
            cout << "Error, can't calculate" << endl;
        }
    }

    return 0;
}

