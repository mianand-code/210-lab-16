// COMSC-210 | Lab 16 | Mira Anand
// Module 6, Lesson: Linked Lists, Assignment: Color Class w/ Constructors
// IDE used: Visual Studio Code for Mac

#include <cstdlib> // needed to generate a random number
#include <ctime> // needed to generate a random number
#include <iomanip> // needed to use setw()
#include <iostream>
using namespace std;

// declaration and initialization of a const int variable to represent the maximum RGB hue value
// creation of this variable will help to generate a random number for an object's RGB hue values in main()
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
    // using inline functions, since functions are 1 line
    public:
        // creation of a default constructor, Color()
        // DESCRIPTION: the default constructor initializes all RGB hue values to 0
        // ARGUMENTS: no arguments/parameters
        // RETURNS: no return type
        Color()                     { red = 0; green = 0; blue = 0; }
        // creation of a partial constructor, Color(int r)
        // DESCRIPTION: this partial constructor initializes "red" by parameter and initializes "green" and "blue" to 0
        // ARGUMENTS: int r, represents the red hue value
        // RETURNS: no return type
        Color(int r)                { red = r; green = 0; blue = 0; }
        // creation of another partial constructor, Color(int r, int g)
        // DESCRIPTION: this partial constructor initializes "red" and "green" by parameter and initializes "blue" to 0
        // ARGUMENTS: int r and int g, represents the red and green hue values
        // RETURNS: no return type
        Color(int r, int g)         { red = r; green = g; blue = 0; }
        // creation of a full parameter constructor, Color(int r, int g, int b)
        // DESCRIPTION: the full parameter constructor initializes all RGB hue values by parameter
        // ARGUMENTS: int r, int g, int b - represents the red, green, and blue hue values
        // RETURNS: no return type
        Color(int r, int g, int b)  { red = r; green = g; blue = b; }

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
    srand(time(0)); // needed as the first line in main() to generate random numbers for the RGB hue values for color4 object

    // creating each Color object separately in order to gain practice with creating various objects and with using the dot operator to access public member functions (print())
    
    // creation of 1st Color object
    // this object relates to the default constructor - since all RGB hue values were initialized to 0, all RGB hue values for this object will print as 0
    Color color1;
    // outputting hue values to the console using the object's print() method
    color1.print();

    // creation of 2nd Color object
    // this object relates to the first partial constructor
    // since "red" was initialized by parameter and "blue" and "green" initialized to 0, "red" will print as 100 and "blue" and "green" as 0
    // you can set "red" to any hue value you would like by replacing the 100 with another value
    Color color2(100);
    // outputting hue values to the console using the object's print() method
    color2.print();

    // creation of 3rd Color object
    // this object relates to the second partial constructor
    // since "red" and "green" were initialized by parameter and "blue" initialized to 0, "red" will print as 109, "green" will print as 18, and "blue" as 0
    // you can set "red" and "green" to any hue value you would like by replacing the 109 and 18 with other values
    Color color3(109, 18);
    // outputting hue values to the console using the object's print() method
    color3.print();

    // creation of 4th Color object
    // this object relates to the full parameter constructor
    // since all RGB hue values were initialized by parameter, all RGB hue values for this object will print as random numbers within the range 0-255
    // rand() % MAX_HUE_VALUE = 0-255
    // you are able to change the parameters and set all RGB hue values to anything you would like
    Color color4(rand() % MAX_HUE_VALUE, rand() % MAX_HUE_VALUE, rand() % MAX_HUE_VALUE);
    // outputting hue values to the console using the object's print() method
    color4.print();

    // creation of 5th Color object
    Color color5(255, 192, 203);
    // outputting hue values to the console using the object's print() method
    color5.print();

    return 0;
}