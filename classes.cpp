// OOPs - Binary and objects

// C++ --> initially called --> C with Binary by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// Binary --> structures + more
// Binary --> can have methods and properties
// Binary --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class Binary {
private:
    string name;
    void chk_bin(void);  // Private method to check if the string is binary

public:
    void read(void);
    void display(void);
};

void Binary::chk_bin(void) {
    for (int i = 0; i < name.length(); i++) {
        if (name.at(i) != '0' && name.at(i) != '1') {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void Binary::read(void) {
    cout << "Enter the Binary Number: ";
    cin >> name;
    chk_bin();  // Call the binary check after reading input
}

void Binary::display(void) {
    for (int i = 0; i < name.length(); i++) {
        cout << name.at(i);
    }
    cout << endl;
}

int main() {
    Binary b;
    b.read();      // Now the binary check will be executed within read()
    b.display();
    return 0;
}










// Properties of member functions
// 1. It cannot access the member variables directly
// 2. It can be declared inside the class or outside the class using the scope resolution operator ::
// 3. It can return any data type and take any number of parameters
// 4. We do not need to pass the object in the member function, it can directly access the member through the this pointer
// 5. It can access all the members of a class, even private members
// 6. We can make a member function inline by prefixing the function with the keyword inline