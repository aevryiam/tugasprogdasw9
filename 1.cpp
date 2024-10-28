#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.1416;

// distance
double distance (double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

// radius
double radius (double x1, double y1, double x2, double y2){
    return distance (x1, y1, x2, y2);
}

// circumference
double circumference (double r){
    return 2 * pi * r;
}

// area of circle
double area(double r){
    return pi * pow(r,2);
}

// main function
int main (){
    double x1, y1, x2, y2;
    
    // input the number of x and y
    cout << "Enter the center of first circle (x1, y1)\n" << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;

    cout << endl << "Enter the center of second circle (x2, y2)\n" << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << endl << endl;

    // calculate radius
    double r = radius(x1,y1,x2,y2);

    // calculate diameter, circumference, and area
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    // result
    cout << "Radius = " << r << endl ;
    cout << "Diameter = " << d << endl;
    cout << "Circumference = " << c << endl;
    cout << "Area of Circle = " << a << endl;

    return 0;
}

/* 
The Function
distance: This function calculates the Euclidean distance between two points.
radius: This function calculates the radius by calling the distance function with the center and a point on the circle.
circumference: This function calculates the circumference using the formula 2𝜋𝑟/
area: This function calculates the area using the formula 𝜋𝑟^2.
*/

/*
Formal Parameter 
    double distance(double x1, double y1, double x2, double y2)
Actual Parameter
    double d = distance(x1, y1, x2, y2) -> on main()
Function Signature
    distance :
        double distance(double, double, double, double);
    radius :
        double radius(double, double, double, double);
    circumference :
        double circumference(double);
    area :
        double area(double);

*/
