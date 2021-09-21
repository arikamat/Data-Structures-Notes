#include<iostream>
using std::cout;

int main(){

}
/*
 Pointers
 ########

 ptr = address + type
 Cannot implicitly change the type of a pointer

 int x = 17;
 int *px = &x; //The ``int *`` part means a pointer to int
 //The above line is read like let the address of x be stored in the variable px which is a pointer to an int

 //If you wanted to increment x by 5 solely by using px, you could not do it by saying int answer = px +5
 //In fact, if you say px+5 the compiler with try to do pointer aritchmatic which is //1000(sample memory address of x)+5*4(sizeof(int))
 //The correct way of doing it would by dereferencing the pointer
 //int y = *px + 5; //correct way of incrementing x by 5. y now has 22

 Most useful application of pointer is for Arrays
 ############
 Arrays & Pointers
 ############
 If I wanted to create an array for 9 integer variables, it would need to be written like this
 int *a = new int[9];
 //YOU NEED TO REMEMBER THE LENGTH OF THE ARRAY. COMPILER WILL NOT DO ANYTHING IF YOU FALL OFF THE END OF THE ARRAY
 a[3] = 29;// a[3] is synonymous for *(a+3) = 29;
 a[17]=2 //LENGTH OF ARRAY OF 9 BUT COMPILER WILL NOT STOP YOU FROM DOING THIS

 //Every new must eventually followed with a delete
 delete[] a;
 ############
 Strings & Pointers
 ############
 //Must distinguish between a c-string and cpp-string

 C-string
    char *str = new char[1000];
    cout << str; //cout will recognize that this is a character string and print out the array until it finds the null character (/0);

    safer way  to print out c-string
    #include<cstring>//we want this so we can get the strlen method
    strlen has the following code int it
        size_t strlen(const char *s){
            size_t len =0;
            while(*s++)++len;
            return len;
        }

 Few types of constants
    saying Dog *const this = ---------;
    //*const is a pointer which always points to the same location. You can not change where 'this' points to

 c++ - string
    string a =
 */