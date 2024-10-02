// COMSC-210 | Lab 16 | Mira Anand
// Module 6, Lesson: Linked Lists, Assignment: Color Class w/ Constructors
// IDE used: Visual Studio Code for Mac

#include <cstdlib> // needed to generate a random number
#include <ctime> // needed to generate a random number
#include <iomanip> // needed to use setw()
#include <iostream>
using namespace std;

// declaration and initialization of a const int variable to represent the maximum RGB hue value
// creation of this variable will help to generate a random number for each RGB hue value in main()
// initializing the variable with the value 256 because rand() % 256 = 0-255, which is the range of possible values for each hue according to the RGB color model
const int MAX_HUE_VALUE = 256;
// declaration and initialization of a const int variable to use with setw() to neatly format output
const int SET_W_NUM = 3;

// creation of Color class
class Color
{
    // private member variables
    private:
        int red;
        int green;
        int blue;
    // public member functions
    // using inline functions for setters and getters, since functions are 1 line
    public:
        // creating all setters together, to keep it organized
        // void setRed(int r), void setGreen(int g), void setBlue(int b) function header
        // DESCRIPTION: these functions will "set" the RGB hue values for each Color object
        // ARGUMENTS: int r, int g, & int b. Represents the 3 separate hue values for each color
        // RETURNS: nothing, void functions
        void setRed(int r)      { red = r; }
        void setGreen(int g)    { green = g; }
        void setBlue(int b)     { blue = b; }
        // creating all getters together, to keep it organized
        // int getRed() const, int getGreen() const, int getBlue() const function header
        // DESCRIPTION: these functions will "get" the RGB hue values for each Color object after they are "set"
        // ARGUMENTS: no arguments/parameters
        // RETURNS: the int hue value for red, green, and blue
        // adding a trailing const to each, since getters do not change an object's data
        int getRed() const      { return red; }
        int getGreen() const    { return green; }
        int getBlue() const     { return blue; }

        // creating a member print() method to print the object's data
        // void print() function header
        // DESCRIPTION: this function neatly outputs the RGB hue values for each Color object
        // SET_W_NUM ensures all hue values are neatly aligned
        // ARGUMENTS: no arguments/parameters
        // RETURNS: nothing, void function 
        void print()
        {
            cout << "Color - RGB hue values:" << endl;
            cout << "Red value: " << setw(SET_W_NUM) << red << ", ";
            cout << "Green value: " << setw(SET_W_NUM) << green << ", ";
            cout << "Blue value: " << setw(SET_W_NUM) << blue << endl;
            cout << endl;
        }
};

int main()
{
    srand(time(0)); // needed as the first line in main() to generate random number

    // creating each Color object separately in order to gain practice with creating various objects and with using the dot operator to access public member functions
    
    // creation of 1st Color object
    Color color1;
    // using setters to populate the object with data
    // populating the object with random number data, rand() % MAX_HUE_VALUE = 0-255
    color1.setRed(rand() % MAX_HUE_VALUE);
    color1.setGreen(rand() % MAX_HUE_VALUE);
    color1.setBlue(rand() % MAX_HUE_VALUE);
    // outputting hue values to the console using the object's print() method
    color1.print();

    // creation of 2nd Color object
    Color color2;
    // using setters to populate the object with data
    // populating the object with random number data, rand() % MAX_HUE_VALUE = 0-255
    color2.setRed(rand() % MAX_HUE_VALUE);
    color2.setGreen(rand() % MAX_HUE_VALUE);
    color2.setBlue(rand() % MAX_HUE_VALUE);
    // outputting hue values to the console using the object's print() method
    color2.print();

    // creation of 3rd Color object
    Color color3;
    // using setters to populate the object with data
    // populating the object with random number data, rand() % MAX_HUE_VALUE = 0-255
    color3.setRed(rand() % MAX_HUE_VALUE);
    color3.setGreen(rand() % MAX_HUE_VALUE);
    color3.setBlue(rand() % MAX_HUE_VALUE);
    // outputting hue values to the console using the object's print() method
    color3.print();

    // creation of 4th Color object
    Color color4;
    // using setters to populate the object with data
    // populating the object with random number data, rand() % MAX_HUE_VALUE = 0-255
    color4.setRed(rand() % MAX_HUE_VALUE);
    color4.setGreen(rand() % MAX_HUE_VALUE);
    color4.setBlue(rand() % MAX_HUE_VALUE);
    // outputting hue values to the console using the object's print() method
    color4.print();

    // creation of 5th Color object
    Color color5;
    // using setters to populate the object with data
    // populating the object with random number data, rand() % MAX_HUE_VALUE = 0-255
    color5.setRed(rand() % MAX_HUE_VALUE);
    color5.setGreen(rand() % MAX_HUE_VALUE);
    color5.setBlue(rand() % MAX_HUE_VALUE);
    // outputting hue values to the console using the object's print() method
    color5.print();

    return 0;
}