// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
    // Print function
    cout << "1" << endl;//print 1 on the screen
    cout << "2" << endl;
    cout << "3\n";
    cout << "3" << "\n";
    cout << "4" << endl;
    cout << "(1+2)" << endl;
    
    /* Performing mathematical operations using C++
        such as: +, -, /, * , %
    */
    
    cout << (1+2) << endl;
    cout << (3+2) << "\n";
    cout << 6 << endl;
    cout << 2+3 << endl;
    cout << 2*3 << endl;
    cout << 3*2 << endl;
    cout << 2-3 << endl;
    cout << 3-2 << endl;
    cout << 2/3 << endl;
    cout << 3/2 << endl;
    cout << 4/3 << endl;
    cout << 4/2 << endl;
    cout << 3.0/2 << endl;
    
    /* It is multililne comment
    data types in c++
    int --> 1, 2, -4, 0
    double --> 3.5, -1.6
    bool --> true, false
    char --> 'a', 'b' , 'z', 'D'
    string --> "a", "adit123", "aditya", "Aditya Jain" 
    */
    
    /*
    Variables in C++
    
    int a = 5; @declaration and initialization in same line
   
    int a; @declaration only
    a = 5; @initialization only
    */
    
    // cout << a << endl;
    int a = 10;
    cout << a << endl;
    a = 95;
    // a = "aditya"; @ wrong because variable a is declared as integer so we can't assign it with any data type like we are here giving a to string
    cout << a << endl;
    
    int b;
    b = 20;
    cout << b << endl;
    
    return 0;
}