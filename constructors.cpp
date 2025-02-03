/*
Constructors:
- Special member functions of a class that are executed whenever new objects of this class are created.
- Constructors do not have a return type.
- Constructors are used to initialize the object.
- Constructors have the same name as the class.
- Constructors are called automatically when the object is created.
- Constructors can be overloaded.
- Constructors can have default arguments.
- Constructors can be parameterized.
- Constructors can be private.
- Constructors can be public.

Syntax:
class class_name {
    public:
        class_name() {
            // Constructor code
        }
};

class_name obj; // Constructor is called automatically

Types of Constructors:
1. Default Constructor: Constructor with no arguments.
2. Parameterized Constructor: Constructor with arguments.
3. Copy Constructor: Constructor that initializes an object using another object of the same class.
4. Constructor Overloading: Having more than one constructor in a class.
*/

// Default Constructor:

// #include <iostream>
// #include <string>

// using namespace std;

// class Complex {
//     private: 
//         int a, b;

//     public:
//         Complex(void); // ---> Declaration of constructor

//     void print_number(){
//         cout << "Your number is: "<< a << " + " << b << "i" << endl;
//     }
// };

// Complex :: Complex(void) // ---> This is a default constructor
//     { 
//         a = 10;
//         b = 20;
//     }

// int main()
// {
//     Complex c1;
//     c1.print_number();

//     return 0;
// }




// Example 2:

// #include <iostream>
// #include <string>

// using namespace std;

// class Stats
// {
// private:
//     /* data */
//     int DOB, bodycount;
//     string Name;
// public:
//     Stats(void);

//     void print_stats()
//     {
//         cout << "Your name is "<< Name << " and your DOB is: " << DOB <<" and your Bodycount is: " << bodycount << endl;
//     }

// };

// Stats :: Stats(void)
// {
//     DOB = 2122003;
//     bodycount = 2;
//     Name = "Sid";
// }

// int main()
// {
//     Stats Sid;
//     Sid.print_stats();

//     return 0;
// }





// Parametrized Constructors

// Example 1:

// #include <iostream>
// #include <string>

// using namespace std;

// class Complex {
//     private: 
//         int a, b;

//     public:
//         Complex(int x, int y); // ---> Declaration of constructor

//     void print_number(){
//         cout << "Your number is: "<< a << " + " << b << "i" << endl;
//     }
// };

// Complex :: Complex(int x, int y) // ---> This is a parameterized constructor which takes 2 parameters
//     { 
//         a = x; // --> sets value of int a as x and b as y 
//         b = y;
//     }

// int main()
// {
//     Complex n1(10, 2);
//     Complex n2(20, 3);
//     Complex n3(30, 4);
//     n1.print_number();
//     n2.print_number();
//     n3.print_number();
//     return 0;
// }



// Example 2:

// #include <iostream>
// using namespace std;

// class Point
// {
//     int x, y;
    
//     public:
//         Point(int a, int b)
//         {
//             x = a;
//             y = b;
//         }

//         void displayPoint()
//         {
//             cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//         }
    
// };

// int main()
// {
//     Point p(10, 23);
//     Point q(20, 33);
//     p.displayPoint();
//     q.displayPoint();
// }