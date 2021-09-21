#include<iostream>
using std::cout;

int main() {

}
/*
Header Files
############
Function signatures like the following
 double sin(double x);
 int sin(int x);
 .....
 class X {
    public:
        X(); //default constructor (note how it has no return type)
        X(const X& x); //copy constructor (note how it has no return type)
        X& operator= const(X& x); // copy
        int F(const string& s){
            this -> b = 17; //This is essentially this.b = 17 in java
            // above statement is referring to the private int b defined below
    private:
       int b;
 }
 Members of classes are private by default
----------
 int main(){
    X x;//This actually calls the default constructor. Declares and instantiates unlike java
    int a = x.F("Hi there!");
 }
 Every object has a 'this' pointer
*/
/*
 lets say that x.h is a header file (with the stuff above inside of it) and x.cpp is the running file
 Inside of x.cpp you need to add the following
    #include "x.h"
    X::X(): b(19){ //Creates the constructor and sets b to 19
        //code
    }
    x& x:: operator=(const X& x){
        //code
        return *this; //this is the dereference operator
    }
 */
/*
 * This = address of invoking object
 * if you call x.F("Hi there"), inside of the method F, 'this' will be a pointer to the x object that called the F method
 * If you add a const after a function declaration
 * ex. int F(const string& s) const; //THIS WILL NOT MODIFY THE INVOKING OBJECT IN ANY WAY
 */
/*
 * int F(double x, int y);
 * int F(double x, int y); const;
 * //These are 2 different functions according to c++
 * if the invoking object is a constant it will call the second one
 * if the invoking object is not a constant it will call the first one
 */
/*
 * Lets say we have a file called pt_test.cpp with the following code
 * #include "Pt.h"
 * int main(){
 *  Pt p1{3,43}, p2{5,12};
 *  Pt p3 = p1+p2;
 *  cout<<p3<<endl;
 *  return 0;
 */
/*
 * Lets say we have a file called Pt.h with the following code
 * class Pt{
 * public:
 *  Pt(double x, double y);
 *  Pt (const Pt& pt);
 *  Pt operator+(const Pt& pt) const;
 *  Friend ostream& operator<<(ostream& out, const Pt& pt)
 * private:
 *  double x,y;
 */
/*
 * Lets say we have file called pt.cpp with the following code
 * Pt::Pt(double x, double y): X(x), y(y){
 *  //code
 * }
 *
 * Pt:: Pt(const Pt& pt) : x ( pt.x), y(pt.y){
 *  //code
 * }
 * Pt pt:: opeartor+(const Pt& pt) const
 *
 */