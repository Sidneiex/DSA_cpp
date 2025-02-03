// // Inheritance
// Concept of reusability is supported using inheritance
// The existing class is called Base class.
// The new class which is inherited is called as the Derived class.

// Employee (Base) ---> Programmer (Derived) <----Assistant (Base)

// Types of Inheritance:

// 1. Single Inheritance: A derived class with only one Base class.
// Eg: Employee (Base) ---> Programmer (Derived)

// 2. Multiple Inheritance: A derived class with more than one Base class
// Eg: Employee (Base) ---> Programmer (Derived) <----Assistant (Base)

// 3. Hierarchical Inheritance: Several derived classes from a single base class
// Eg:  Manager (Derived) <--- Employee (Base) ---> Programmer (Derived)

// 4. Multilevel Inheritance: Deriving a class from already derived class
// Eg: Animal() ---> Mammal() ---> Cow()
// Mammal() = Animal() + some more attributes ; Cow() = Mammal() + some more attributes

// 5. Hybrid Inheritance: A combination of multiple inheritance and multilevel inheritance
// A class is derived from two classes as in multiple inheritance
// However, one of the parent classes is not a base class
// Eg:    Animal()
//       |       |
//       |       |
//   Mammal()  Bird()
//      |        |
//         Bat()

#include <iostream>
using namespace std;

// Base class
class Employee
{
    public:    
        int id;
        float salary;
        Employee(int inpID)
        {
            id = inpID;
            salary = 34.0;
        }
        Employee(){} // ---> We make a default constructor here since when we Try to run in the int main() function it throws an error as it is not declared in the class Employee
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility mode}} {{base class name}}
{
    class members/methods/etc...
}
Notes: 
1. Default visibility mode is private
2. Private visibility mode: Public members of the base class becomes Private members of derived class
3. Public visibility mode: Public members of the base class becomes Public members of derived class
4. Private members are never inherited
*/

// Creating a programmer class derived from Employee class (base class)

class Programmer : public Employee
{
    public:
    Programmer(int inpID){
        id = inpID;
    }
       int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};


int main()
{
    Employee Sid(1), Ashwin(2);
    cout<<Sid.salary<<endl;
    cout<<Ashwin.salary<<endl;
    Programmer skillF(1);
    cout << skillF.languageCode<< endl;
    skillF.getData();
    
    return 0;

}