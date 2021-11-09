/*
Prolog
a.  Program Description: Program that displays the the sphere, cylinder, and cone volume and surface areas given a radius and height.
b.  Author: Ethan Santos
c.  Date: November 2, 2021
d.  Input variables: radius and height (double)
e.  Process Flow: Command line takes two inputs (radius and height) and calculates the surface area and volume for a cone, cylinder, and sphere and displays it in the output with rounded values
using setprecision. The program then prompts the user if he/she wants to continue running the program. If yes, the loop restarts, if not, the loop breaks.
f.  Output variables: volume and surface area
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

double get_radius(){
    double radius;
    cout << "Input your radius: ";
    cin >> radius;
    return radius;
}

double get_height(){
    double height;
    cout << "Input your height: ";
    cin >> height;
    return height;
}

double sphere_volume(double r){
    double volume = (pow(r, 3) * M_PI) * 4/3;
    return volume;
}

double sphere_surface(double r){
    double surface = 4 * M_PI * (pow(r, 2.0));
    return surface;
}

double cylinder_volume (double r, double h){
    double volume = (pow(r, 2) * h) * M_PI;
    return volume;
}

double cylinder_surface(double r, double h){
    double surface = (2 * M_PI * r * h) + (2 * M_PI * pow(r, 2));
    return surface;
}

double cone_volume(double r, double h){
    double volume = (pow(r, 2)) * M_PI * (h/3);
    return volume;
}

double cone_surface(double r, double h){
    double surface = (sqrt(pow(h,2) + pow(r, 2)) + r) * (M_PI * r);
    return surface;
}

int main(){
    double radius;
    double height;
    bool flag = true;
    char answer;
    while (flag){
        radius = get_radius();
        if (radius < 0){
            cout << "Error, invalid value!" << endl;
        }
        else{
            height = get_height();
            if (height < 0){
                cout << "Error, invalid value!" << endl;
            }
        }

        if ((radius >= 0) && (height >= 0)){
            cout << "            VOLUME        SURFACE" << endl;
            cout << "Sphere      " << fixed << setprecision(2) << sphere_volume(radius) << "        " << fixed << setprecision(2) << sphere_surface(radius) << endl;
            cout << "Cylinder    " << fixed << setprecision(2) << cylinder_volume(radius, height) << "        " << fixed << setprecision(2) << cylinder_surface(radius, height) << endl;
            cout << "Cone        " << fixed << setprecision(2) << cone_volume(radius, height) << "        " << fixed << setprecision(2) << cone_surface(radius, height) << endl;
        }

        cout <<"Do you want to continue (y/n)? ";
        cin >> answer;
        if (answer != 'y'){
            cout << "Exit!" << endl;
            flag = false;
        }

    }
}