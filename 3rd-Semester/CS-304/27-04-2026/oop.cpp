// What is Constructor?

// In C++, a constructor is a special member function that is automatically called when an object of a class is created. Its primary purpose is to initialize the object's data members and establish its initial state.

// Key Characteristics

// Naming: It must have the exact same name as the class.
// No Return Type: It does not have a return type, not even void.
// Automatic Invocation: It is triggered immediately upon object instantiation (either on the stack or the heap).
// Overloading: A class can have multiple constructors with different parameter lists.
// Restrictions: Constructors cannot be virtual, static, const, or volatile.

// Types of Constructors

// Default Constructor: Takes no arguments. If you don't define any constructor, the C++ compiler generates an implicit default one.
// Parameterized Constructor: Accepts arguments to initialize members with specific values during object creation.
// Copy Constructor: Initializes a new object by copying data from an existing object of the same class.
// Move Constructor: (C++11 and later) Transfers resources from a temporary (rvalue) object to a new one, avoiding expensive deep copies.
// Delegating Constructor: (C++11 and later) Allows one constructor to call another constructor in the same class to avoid code duplication.

/* --- */

// Destructor

// A destructor in C++ is a special member function that is automatically invoked when an object’s lifetime ends, such as when it goes out of scope or is explicitly deleted. Its primary purpose is to release resources—like dynamically allocated memory, file handles, or network connections—acquired during the object's life.

// Key Characteristics

// Syntax: Defined with a tilde (~) followed by the class name (e.g., ~MyClass()).
// No Parameters or Returns: Destructors cannot take arguments and do not have a return type.
// Single Occurrence: A class can have only one destructor; it cannot be overloaded.

// Automatic Invocation:
// For stack objects, the destructor runs when they go out of scope.
// For heap objects (created with new), it runs when delete is called.
// Order of Execution: Objects are destroyed in the reverse order of their creation.

// Types of Destructors

// Default Destructor: If no custom destructor is defined, the C++ compiler provides an implicit one that handles simple cleanup for member variables.
// Virtual Destructor: Crucial in inheritance. Declaring a base class destructor as virtual ensures that when a derived object is deleted via a base class pointer, the derived class's destructor is called first, preventing memory leaks.

// Encapsulation

// Encapsulation is a fundamental principle of Object-Oriented Programming (OOP) that binds data (variables) and the methods (functions) that manipulate that data into a single unit, typically a class. It functions as a protective shield that prevents direct access to data from outside the class, enforcing controlled interaction and improving code security, organization, and maintainability.

// Key functions of encapsulation include:

// Data Protection and Hiding: Encapsulation restricts direct access to an object's internal state (data members) by making them private. This protects sensitive information from unauthorized or accidental modification.
// Controlled Access (Getters/Setters): While data is hidden, encapsulation provides public methods—getters and setters—to safely read or modify that data. These methods often include validation logic to ensure that only valid data is assigned.
// Improved Maintainability and Flexibility: By hiding the internal implementation, developers can change how a class works internally (e.g., changing a variable's data type or logic) without breaking the external code that relies on it.
// Enhanced Modularity: Encapsulation encourages bundling related data and behavior into a single class, making the code more organized and modular. This makes individual components easier to test and debug.
// Reduced Complexity: It simplifies interaction with objects by presenting a clean, consistent interface (public methods) while hiding the complex underlying logic, often acting as a "black box".
// Code Reusability: Encapsulated classes, being self-contained units with clearly defined interfaces, are easier to reuse in different parts of a program or in entirely different projects.

// Getters and Setters

// Getters and setters in C++ are public member functions used to safely access and modify private or protected class data, implementing encapsulation. Getters (accessors) retrieve private values, while setters (mutators) modify them, allowing validation or logic during assignment. They prevent direct data access, protecting internal state.

// Access Modifiers

// Access modifiers (or specifiers) in C++ define the visibility and accessibility of class members (variables and functions). They are fundamental to encapsulation, allowing you to protect internal data from unauthorized external modification.

// There are three main access modifiers in C++:
// Public: Members are accessible from anywhere in the program. They typically form the interface of the class that external users interact with.
// Private: Members are only accessible from within the class they are declared in. This is the most restrictive level and is used to hide sensitive internal implementation details.
// Protected: Members are accessible within the defining class and its derived (child) classes, but not from outside the class hierarchy.

// Implementing Encapsulation

#include "iostream"
#include "string"
using namespace std;

class Student
{

public:
    string name;
    int age;
    bool isSmart()
    {
        return true;
    }

private:
    double money;
    bool isBunk()
    {
        return false;
    }

public:
    Student(string name, int age, double money)
    {
        this->name = name;
        this->age = age;
        this->money = money;
    };
    
};

int main()
{
    Student s1("Farooq", 20, 70000);
    cout << "Age is public: " << s1.age << endl; // // run smoothly because it's public
    // cout << "Money is private: " << s1.money << endl; // cause error because it's private
    // cout << "Do Bunk: " << (s1.isBunk() != 0 ? "YES!" : "NO!") << endl; // cause error because it's private otherwise not
    cout << "Is Smart: " << (s1.isSmart() != 0 ? "YES!" : "NO!") << endl; // run smoothly because it's public

    return 0;
}