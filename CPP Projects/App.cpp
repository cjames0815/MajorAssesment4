// pre-processor directives
#include <iostream>
#include <new>

#include "./headers/BasicIo.h"
#include "./headers/Decisions.h"
#include "./headers/loops.h"
#include "./headers/Functions.h"



//in C++ a namespace is a collection of related function,
// classes, objects, and variables

// the C++ standard library fucntions, classes, objects, and 
//variables are in a namespace named std.

// a wayto bring in a specific object, function, class, or 
//variable of the std namespace into an application is with the 
//help of the using declaration.
//using std::cout;

// another way to bring in a specific object, function, class, or 
//variable of the std namespace into an application is with the 
//help of the using namespace statment.
using namespace std;

 int main() {

//     int i, n;
//     int * p;
//     cout << "How many number would you like to type?";
//     cin >> i;
//     //this line of code is dymically allocating memory
//     p = new (nothrow) int[i];
//     if (p = nullptr){
//         cout << "Error: memory could not be allocated";
//         }else{
//             for (n = 0; n < i; n++) {
//                 cout << "Enter number: ";
//                 cin >> p[n];

//             }
//             cout << "You have entered:";
//             for (n = 0; n < i; n ++){
//                 cout <<p[n] << ",";

//             }
//             //this line of code is deallocating the memory
//             delete[] p;
//         }

    
    //in order to use a C++ object, like cout, we need to 
    // specify that it belongs to the std namespace
    //one way to specify is by using the scope resolution 
    //operator :: in conjunction with a reference to the 
    // name of the namespace
    //std::
    //cout << "Hello World";

    /*Basic Input Output*/
    //output();
    //input();

    /*Decisions*/
    //decisions1();

    /*Loops*/
    //loops();
    /*Functions*/
    string student= "Cameron James";
    string language = "C ++";
    string programmer = "Bjarne Stroustoup";

    congratulate1(student, language, programmer);

    return 0;
}