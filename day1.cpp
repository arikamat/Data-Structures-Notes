#include <iostream> //Loads source text of iostream
using std::cout; //Don't do: using namespace std
/* Don't do ``using namespace std`` because say the namespace looks like the following
  namespace std{
   int x; // The x outside is now std::x
  }
  This could cause numerous naming conflicts
 */

/*
 * 2 types of main function decorations
 * 1) int main ()
 * 2) int main (int argc, char *argv[])
 *
 * 1 is just a normal main method that will run
 * 2 allows you to get the number of arguments passed and the arguments themselves
 */

/*
 * You can run cpp in terminal with the following
 * $c++ ..... -o hello hello.cpp
 * $./hello one two three
 * Here argv[0] is ./hello
 */

int main() { //int return type for the return status. Different from java
    std::cout << "Hello, World!\n";
    /*
     * Just like java << is a bit shift operator
     * However the << operator is overloaded in std
     *
     * Behind the scene the following is happening
     * ostream & operator<< (const string& msg)
     * You could essentially replace the print line with cout.operator<<("Hello World");
     *
     * Notice how this main method is not in a class
     *
     * Java has reference semantics and Cpp has value semantics.
     * This basically means that everything behind the scenes in Java is a pointer
     * Ex) if you wrote in java String c = new String("Hi!"); C would be a String Reference to an object
     *     if you wrote in cpp string c = "Hi!"; c would be a string object not a reference to an object
     *
     *
     */
    int a = 17;
    double b = 3.14;
    string c = "Hi!";
    cout << a << '.' << b << '.' <<c << '\n';
    return 0;
}
/*
 * Why const (cpp) is better than final (java)
 *      Ex. in java if you write the method
 *      public void F(final Dog fido){
 *          Fido.msg = "woof";
 *      }
 *      Here, since fido is a final variable it gives the impression that nothing can change however in java all it means is that the reference to the object can't be changed
 *
 *      In C++ const ensures that nothing gets changed
 *      void F(const Dog&, Fido){
 *         Fido.msg = "Woof"; //THIS WOULD RESULT IN AN ERROR
 *      }
 *
 *      Java vs C++ in terms of data type
 *
 *              Java    C++
 *      byte    1
 *      char            2
 *      short   3       2 or 4
 *      int     4       2 or 4
 *      long    8       4 or 8
 *
 *      For c++ there are unsigned versions of all the datatypes. Whether a char is signed or not, is a mystery
 *      This is why things like int64_t and int32_t have come up
 *
 */
