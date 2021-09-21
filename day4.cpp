#include<iostream>
using std::cout;

int main(){

}
/*
 Exceptions
 ##########

 exception - class from which exceptions should inherit

  class EmptyStackException : public exception{
    //it can really be kept empty
  }

  int pop(){
    if(empty()) throw EmptyStackException();
    else{
        //code to do stuff
    }
  }
  void myStackTest(){
      try{
        int x = my_stack.pop();
      }
      catch(EmptyStackException & ese){
        cout<< "you're an idiot!\n";
      }
}

 ###########
 Templates
 ###########
 Ex. Vector (equivalent of arraylist in java) | Vector is part of the STL Library - Standard Template Library

 #include<vector> //mandatory
 using std::vector; //recommended
 using VI = vector<int>; //personal preference

 vector<double> a(100); //Acts like a 100 element double array but can shrink and grow in size
 a[17] = 3.14; //You can treat it exactly like an array because of operator overloading
    #################
    function Templates
    ##################
        double newton(F fk, DF df, double x0){
            //blah blah blah
            double x1 = x0-F(x0)/df(x0)
        }
        //Problem here is that the compiler doesn't know what F and DF is, all we know is that it is somethings callable
        //This is the purpose of templates
        //Following is how we would do it

        template<typename F, typename DF>
        double newton(F f, DF df, double x0){
            //blah blah blah
            double x1=x0-F(x0)/df(x0);
        }

        class F1{
            public:
                double operator()(double x) const {return x*x -2}
        };

        class DF!{
            public:
                double operator()(double x) const {return 2.0*x}
        };

        F1 f; DF1 df;
        double root = newton (f,df,1);

 ###############################
 Linked Lists
 ###############################

 Singly-Linked List
 start of the list is head of the list and every node has the value and a pointer to the next node. the end has a value and a null pointer

 template<class T>
 struct Link {
    Link(const T& x = T(), Link *next = nullptr): x(x), next(next){}
    ~Link(){delete next;}
    T x;
    Link *next;
 }

 int main(){
    Link<int> *head = new Link<int>(17);
 #######
 Random Things
 #######
 DONT USE MACROS (few exceptions)
 Never say #define PI 3.14; Instead say const double PI = 3.14
 A struct is equivalent to a class with all public memebers
    You could put the word private: and make it exactly like a class but that's just weird
*/