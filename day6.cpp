#include<iostream>
using std::cout;

int main(){

}
/*
 Many types sof operators that may not come to mind immediately

 Operators that can't be overloaded
    Ex. the ``::`` in std::vector
            This can not be overloaded
        the '.' in a.b
            This can not be overloaded
        the '? and :' in a?b:c
            This can not be overloaded

 Operators that can be overloaded but shouldn't
    ||
    &&
    //short circuit can't be maintained when the above two operators are overloaded

 Smart Pointers
    Automatically de-allocate (release resource) when they go out of scope
    clsas Dog{
        class DogPtr{
            Dog *operator ->();

        ];
        Friend class DogPtr;
    }
 Overloading incrementors and decrementors
 ++x -> X& operator++()
 x++ -> X operator++(int)

 Bit operators
 ----------
 int a = 1234;
 ~a flips the bits
 a&b  is bitwise and between a and b
 a|b is bitwise or between a and b
 a<<n is left shift by n bits
 a>>n is right shifti by most significaant n bits
    fill with 0s if unsigned or 1s if signed

 Do Now
 ------
 struct Link{
    string s; //must include #include<string>
    Link *next;
 };
 Link *reverse(Link *head){
    Link *curr = head;
    Link *prev = NULL;
    while(curr->next!=NULL){
        Link *nextLink = curr->next;
        curr->next=prev;
        prev = curr;
        curr = nextLink
    }
    return curr
 }


 }
*/