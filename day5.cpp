#include<iostream>
using std::cout;

int main(){

}
/*
    Complex Arithmetic --> i^2 = -1

    class Complex{
        explicit Complex(double x=0, double y=0): x(x), y(y){}
            //Explicit
            //If you say explicit X(T t) you must call constructor explicitly to convert T to X.

        Complex (const Complex& z): x(z.x), y(z.y){}
        Complex& operator=(const Complex& z){
            x=z.x;
            y=z.y;
            return *this;
        }
        Complex& operator+=(const Complex &z){
            x+=z.x;
            y+=z.y;
            return *this;
        }
        Complex& operator*=(const Complex &z){
            double t = x*z.x -y*z.y;
            y =x*z.y+y*z.x;
            x = t;
            return *this;
        }
        Complex& operator/=(const Complex &z){
            double d = z.x*z.x + z.y*z.y;
            if(!d) throw exception();
            double t = (x*z.x + y*z.y)/d;
            y = (y*z.x-x*z.y)/d
            x = t;
            return *this
        }
        Complex opeartor-() const{
            return Complex(-x,-y);
        }
        //
        main
        Complex c1
        Complex operator+(const Complex& z) const{
            return Complex(x+z.x,y+z.y) //you can also write like Complex w = *this; return w+=z;
        }
        friend ostream& operator<<(Ostream& our, const Complex& z){
            return out<<z.x<<" + i"<<z.y;
        }
        friend istream& opeator>>(ostream& in, Complex & z){
            //Homework
        }
        friend Compelx operator(double t, const Complex& z){
            fucntion so that operations like 2+z1 can happen
            return COmplex(t+z.x,z.y)
        }
        private:
            double x,y; // x + iy
    }
    in main method it is suggested you don't do the following
        Complex z;
        cin >>z;
        if(z) // you need  conversion to numeric type and that becomes to chaotic too quickly
    instead do the following
        Complex z;
        cin>>z;
        if(z!=0.0){


    Miscellaneous

    Make sure not to return references to transient objects
        Because once the function is exited, the eference would no longer exist

    Some objects cannot be copied.
    class X{
        public;

        private:
            x(const X&x)....{}//This object cannot be copied becaue it is a private constructor
    }

*/