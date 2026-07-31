// Lecture No. 23:-

// Default Constructor
// Implicit Default Constructor
// Explicit Default Constructor

// IMP: if a base class has only non-default constructor (implicit or explicit), then when we will create object of any class derived from this base class compiler will not be ableto call base class constructor as base class has no default constructor (constructor that can be called without giving any parameters) so compiler will generate error. We can avoid this error by calling base class non-default constructor in derived class constructor initializer list.

// there are some class members functions that are written just as helper functions for other class member functions and they need not to be called directly using class object.

// Making such functions private works fine as long as we don’t derive any child class from this class, but when we derive some class for specialization these functions will not be accessible in the derived class as private members functions are accessible only in those class to which they belong but these functions are needed in derived classes as

// Solution:

// Modify Access Specifier

// One solution of this problem is that we make “IsLeapYear” function public from private.

// 23.2. “protected” access specifier:

// c++ provides us with protected access specifier for these sorts of situations; protected access specifier ensures that function in base class is accessible in derived class of this base class and NOT outside of this class.

// Disadvantages of protected Members:

// 1) Breaks encapsulation

// The protected member is part of base class’s implementation as well as derived class’s implementation. So we can say that protected members breaks the principle of Encapsulation to some extent which says “A class data members and functions should be encapsulated in the class itself.

// 2) “IS A” Relationship

// Generally we can say that, “Derived Object IS A kind of Base Object”.

// IMP:We can use derived class object where base class object is required as derived class object has implicit base class object also but the reverse of this statement is not true, we can not use base class object where derived class object is required because if we create base class it will only have base part not its derived class part.

// Static Type
// Member Access:

// Using Pointers
// Using Reference

// Lecture No. 24:-

// Protected Members:
// Protected members are somewhere between public and private members. They are used in inheritance. From outside the class no once can access protected access specifier however any publicly derived class can access the protected access specifiers and they behave as protected members of derived class. In a single standalone class protected access specifier has no significance but when we derive any class from this class protected access specifier becomes significant.

// IS-A relationship:
// Inheritance is used when two classes have IS A kind of relationship between two classes. In c++ public inheritance is used for IS A relationship. We can use publicly derived class pointer for its base class pointer because derived class is a kind of base class or in other words derived class is base class with some extra properties. In case of “Student IS-A Person relationship” student has all properties of person for example student walks, eats, drinks and so on as person does but student has some extra properties like student studies is some study program.

// Copy Constructor

// Copy constructor is a member function of a class that is used to create an object of that class by copying values from an already created object.

// Copy Constructor:

#include "iostream"
using namespace std;

// class A
// {
// private:
//     int id;

// public:
//     A(int id)
//     {
//         this->id = id;
//     }

//     A(const A &prevObj)
//     {
//         id = prevObj.id;
//         cout << "Copy Constructor Called: " << endl;
//     }

//     void display()
//     {
//         cout << "ID: " << id << endl;
//     }
// };

// int main()
// {
//     A a1(101);   // Calls parameterized constructor
//     A a2 = a1;   // Calls copy constructor

//     cout << "Object 1:" << endl;
//     a1.display();

//     cout << "Object 2:" << endl;
//     a2.display();

//     a2.display();
//     return 0;
// }

// Shallow Copy

// Compiler by default uses shallow copy so compiler generated default copy constructor will also use shallow copy which simply copies all values of already existing object to newly created object.

// IMP:Compiler generates copy constructor for derived class, calls the copy constructor of the base class and then performs the shallow copy of the derived class’s data members. The problem with shallow copy remains same as was in the case of copy constructor for a single class that it doesn’t work correctly in case of dynamic memory because in that case we are only storing pointer of the dynamic memory in class when we will do copy only the pointer value will be copied and pointers of both objects of student class will start pointing to same memory location as shown in the diagram now suppose obj1 is destroyed it frees it’s memory allocated using new operator using its destructor the result will be that obj2 pointer will also become invalid. The solution is Deep Copy in deep copy we will write copy constructor code by our self to ensure that when one object is copied from other object new dynamic memory is allocated for it as well so that it doesn’t rely on previous object memory.

// Deep Copy

// Type conversion

// C++ is strongly typed language mean we can not use one type instead of other type we need to convert one type in other type before using it. This conversion from one type to another type is called casting.

// Casting

// Casting can be done in two ways.
// Implicit casting conversion
// Explicit casting conversion

// The C++ draft standard includes the following four casting operators.

// 1) static_cast: Used for compile-time type conversions.
// 2) const_cast: Used for safe downcasting in inheritance. The base class must have at least one virtual function.
// 3) dynamic_cast: Used to add or remove the const qualifier.
// 4) reinterpret_cast: Used for low-level conversions between unrelated pointer types.

// 1) static_cast code

// int main()
// {
//     double x = 10.75;
//     int y = static_cast<int>(x);

//     cout << y;

//     return 0;
// }

// 2) dynaimc_cast

// class Base
// {
// public:
//     virtual void show() {}
// };

// class Derived : public Base
// {
// public:
//     void display()
//     {
//         cout << "Derived Class";
//     }
// };

// int main()
// {
//     Base* ptr = new Derived();

//     Derived* d = dynamic_cast<Derived*>(ptr);

//     if (d != nullptr)
//         d->display();

//     delete ptr;
//     return 0;
// }

// const_cast

// int main()
// {
//     const int x = 10;

//     int* ptr = const_cast<int*>(&x);

//     cout << *ptr;

//     return 0;
// }

// 4) reinterpret_cast:

// int main()
// {
//     int x = 65;

//     int* p = &x;
//     char* c = reinterpret_cast<char*>(p);

//     cout << *c;

//     return 0;
// }

// In perspective of inheritance casting can be of two kinds.

// a) Up casting (casting from derived to base class)
// b) Down casting (casting from base to derived class)

// IMP: char * is c++ built in data type that can be used exactly like char arrays in fact char arrays are also treated as char * in c++ so we used char * where we needed to use char array.

// Lecture No:- 25

// Overriding Member Functions of Base Class in Derived Class (Function Overriding)

// Derived class can override the member functions of its base class. To override a function the derived class simply provides a function with the same signature12 (prototype) as that of its base class.

// Overloading vs. Overriding

// Function Overloading is done within the scope of one class whereas Function Overriding is done in scope of parent and child classes (inheritance).Overriding within the scope of single class is error due to duplicate declaration (two member functions with same prototype)

// class Base
// {
// public:
//     void show()
//     {
//         cout << "Base Class Function" << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     void show()
//     {
//         cout << "Derived Class Function" << endl;
//     }
// };

// int main()
// {
//     Derived obj;
//     obj.show();

//     return 0;
// }

// IMP: It is used to achieve runtime polymorphism when combined with virtual functions.

// Lecture No:- 26

// Base Initialization

// The child can only call constructor of its direct base class to perform its initialization using its constructor initialization list.  The child cannot call the constructor of any of its indirect base classes to perform their initialization using its constructor initialization list.

// Types of Inheritance

// There are three types of inheritance

// • Public
// • Protected
// • Private

// Skip Lecture No:- 27

// Lecture No:- 28

// Virtual Functions

// virtual function is a member function in a base class that you expect to redefine (override) in derived classes. It ensures that the correct function is called for an object, regardless of the type of pointer or reference used to make the function call.

// class D
// {
// public:
//     void virtual show()
//     {
//         cout << "Show function of D class." << endl;
//     };
// };

// class E : public D
// {
// public:
//     void show()
//     {
//         cout << "Show function of E class." << endl;
//     };
// };

// class F : public D
// {
// public:
//     void show()
//     {
//         cout << "Show function of F class." << endl;
//     };
// };

// int main()
// {
//     D *ptr;
//     ptr = new E;

//     ptr->show();
//     ptr = new F;
//     ptr->show();

//     return 0;
// }

// Lecture No:- 29

// 29.1. Abstract Classes

// In our Shape class hierarchy Shape class has no real world existence, there will be no object in real world with name Shape there will always be an object of kind of shape like Line, Circle or Triangle, this kind of class with no specific real world existence are called Abstract Classes, as these classes are Abstract their behavior becomes also abstract like Draw and calcArea methods in case of Shape class, the actual concepts.

// are realized in derived classes, like all kinds of shapes will have draw and calcArea method, so we add these methods in general Shape class and all kinds of Shapes inheriting for this general shape class given their own implementation of these methods. Abstract class’s objects cannot be instantiated they are used for inheriting interface and/or implementation, so that derived classes can give implementation of these concepts.

// Concrete Classes

// Concrete classes Implements a concrete concept they can be instantiated they may inherit from an abstract class or another concrete class. So far the classes we studied were concrete classes.

// Abstract Classes in C++
// In C++, we can make a class abstract by making its function(s) pure virtual. Conversely, a class with no pure virtual function is a concrete class (which object can be instantiated).

// Pure Virtual Functions
// A pure virtual represents an abstract behavior and may have not implementation for example draw method in Shape class represent abstract behavior as Shape class itself doesn’t have its existence in real world so there is no question of drawing it however its derived concrete classes like Line, Circle and Triangle does have physical existence and overridden draw method in these classes will have implementation . A function is declared pure virtual by following its header with “= 0”.

// Virtual Destructors

// Make the base class destructor virtual as we made Draw method virtual in base class. Now base class destructor will run after the derived class destructor.

// Virtual Functions – Usage

// Virtual Functions can be used to when we want to inherit interface and implementation (Simple virtual functions) mean base class as well as derived class will have implementation.
// virtual void draw();
// Just inherit interface (Pure Virtual functions) mean only derived classes will will have implementation base may not have implementation.
// virtual void draw() = 0;

// V Table
// Now we see compiler keeps track of virtual functions and call them correctly occording to nature of the object with respect to which they are being called.

// Compiler builds a virtual function table (vTable) for each class having virtual functions. A vTable contains a pointer for each virtual function.

// Dynamic Dispatch (Dynamic Binding)

// It happens in case of virtual functions, for non-virtual functions, compiler just generates code to call the function.
// In case of virtual functions, compiler generates code to
// access the object
// access the associated vTable
// call the appropriate function

// Conclusion

// Virtual Functions should be added in code with care because they add,
// Memory overhead due to V-Tables
// Processing overhead due to extra pointer manipulation
// However, this overhead is acceptable for many of the applications.

// Moral: “Think about performance requirements before making a function virtual”.

// Lecture No:- 30

// See the Handouts.

// Lectuere No:- 31

// Multiple Inheritance

// class Woman
// {
// public:
//     void eat()
//     {
//         cout << "Woman is eating." << endl;
//     }
// };

// class Fish
// {
// public:
//     void eat()
//     {
//         cout << "Fish is eating." << endl;
//     }
// };

// class Mermaid : public Woman, public Fish
// {
// };

// int main()
// {
//     Mermaid m;

//     // m.eat();   // ERROR: Ambiguous

//     return 0;
// }

// Solution 1: Use Scope Resolution Operator

// Lecture No:- 32

// Generic Programming

// Lecture No:- 33

// See Handouts.

// Lecture No:- 34

// Class template

// Lecture No:- 35

// Practice class temlate with copy constructor & class template specialization.

// Generic Template
// template <class T>
// class Display
// {
// public:
//     void show()
//     {
//         cout << "Generic Template" << endl;
//     }
// };

// // Complete Specialization for int
// template <>
// class Display<int>
// {
// public:
//     void show()
//     {
//         cout << "Specialized Template for int" << endl;
//     }
// };

// int main()
// {
//     Display<float> obj1;
//     Display<int> obj2;

//     obj1.show();
//     obj2.show();

//     return 0;
// }

// Lecture No:- 36 & Lecture No:- 37

// Just study general, complete, and partial specialization and it's resolution order. Also study some rules in the case of inheritance for eneral, partial, complete, and ordinary class specializations.

// Lecture No:- 38

// Just understand some rules mentioned in the handouts and do a coding practice of combination of templates and friends.

// Lecture No:- 39

// friend class with templates

//
// class F;
// template <class T>
// class E
// {
// private:
//     T id;
//     friend F;
// };

// class F
// {
//     E<int> a1;
//     E<float> a2;

// public:
//     void display()
//     {
//         a1.id = 10;
//         a2.id = 11.334;

//         cout << a1.id << endl;
//         cout << a2.id << endl;
//         cout << "Hello from F class." << endl;
//     };
// };

// int main()
// {

//     F f1;
//     f1.display();

//     return 0;
// }

// Friend function with template

// template <typename U>
// class G
// {
//     U name;
//     friend void display();
// };

// void display()
// {
//     G<string> g1;
//     g1.name = "Hamad";

//     cout << g1.name << endl;
// }

// int main()
// {

//     display();
//     return 0;
// }

// Lecture No:- 39

// Understand the concept of static member, and it's concept in the context of template class.
// See advantages and disadvantages of templates.

// Lecture No:- 40

// Study Cursors and Itterators.

// https://www.youtube.com/watch?v=SgcHcbQ0RCQ

// Lecture No:- 41 to Lecture No:- 45

// Study STL and remember function names used in the specific containers.
// Study error handling.
// Study Resource management.
