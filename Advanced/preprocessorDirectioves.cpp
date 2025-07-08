#include<iostream>
using namespace std;

#define PI 3.14159
#define SQUARE(x) (x * x)
// #define MAX 100
/* Conditional compilation directive to define MAX if not already defined   */
#ifndef MAX
    #define MAX 200
#endif
// The msg preprocessor_directive/macro converts its argument into a string literal
#define msg(x) #x
// Using a preprocessor directive to define a common alias for cout
#define c cout


int main() {
    cout << "Value of PI: " << PI << endl;
    
    int num = 5;
    cout << "Square of " << num << ": " << SQUARE(num) << endl;

    cout << "Maximum value: " << MAX << endl;

    cout << "Message: " << msg(Hello World!) << endl;

    c << "Using alias for cout: Hello Geeks!" << endl;

    return 0;
}