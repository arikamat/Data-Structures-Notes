#include<iostream>
using std::cout;

int main(){

}
/*
 Abstract Data Type (ADT)
 ########################

 Specifies allowable operations only.
 Ex. Stack: LIFO
 0) Create an empty stack
 1) Add an element
 2) Extract the most recently added element
 3) Check if empty
 const size_t MIN_SIZE=16;
 template<class T>
 class Stack{
    class EmptyStackException: public exception{
        public
            virtual const char *what() const throw(){
            //virtual means that what is inherited and redefined. "what" is already defined in exception
    }
    public:
        Stack(): base(new T[MIN_SIZE]),
                 sp(base), end(base+MIN_SIZE);
        ~Stack(){delete[] base;}
        void push(const T& t){
            if(end==sp) grow();
            *sp++=t;
        }
        T pop(){
            if(empty()) throw EmptyStackException("Tried to pop from an empty stack!");
        }
        bool empty() const{
            return sp === base;
        }
    private:
        T *base,*end,*sp;
        //only caledd when sp == end
        void grow(){
            size_t n = end-base;
            T *q = new T[2*n];
            for(sp=base;sp!=end;){
                *q++ = *sp++;
            }
            sp=q;
            q-=n;
            delete[] base;
            base=q;
            end=base + 2*n;
        }


        }
 }

 ############
 Deque
 A data structur where you can add to both ends
 push_front(t), push_back(t), pop_front(t), pop_back(t) are all common methods for Deques
 Imagine a circular array --> normal arrary with modular arithmatic
 */
