// Creating classes and onbjects in C++

// Steps to create objects

// 1- We have to define class.
// 2- Create instance from the class.
// 3- Constructor helps to create objects.
// 4- There are alos parameterized constructors.
// 5- Insert Attributes and Behaviors.
// 6- Destructor helps to destroy the class environment.

#include "iostream"
#include "string"
using namespace std;

class Human
{
public:
    // Default Constructor
    // Human()
    // {
    //     cout << "Hello, i am constructor of class." << endl;
    // }

    // Paramerterized Constructor
    Human (string name, int age, string height, string weight){
        cout << "This is parameterized constructor." << endl;
        this->name = name ;
        this->age = age;
        this->height = height;
        this->weight = weight;
    }

    // Copy constructor
    Human (const Human &h2){
        cout << "This is copy constructor." << endl;
        this->name = h2.name;
        this->age = h2.age;
        this->height = h2.height;
        this->weight = h2.weight;
    }

    // Attributes
    string name;
    int age;
    string height;
    string weight;

    // Behaviors
    // this will refer to the current object
    void walk()
    {
        cout << this->name << " is walking..." << endl;
    }

    void eat()
    {
        cout << this->name << " is eating...." << endl;
    }

    // Default Destructor
    ~Human()
    {
        cout << "Hello, i am destructor of class and going to end." << endl;
    }
};

int main()
{
    // creating object from the human class human one
    // Human h1;
    // filling the details of human one
    // h1.name = "Muhammad Farooq";
    // h1.age = 19;
    // h1.height = "5.6inch";
    // h1.weight = "69kg";

    // calling the behaviors of human one
    // h1.walk();

    // creating object from the human class human two
    // Human h2;
    // h2.name = "Muhammad Ahmed";
    // h2.age = 21;
    // h2.height = "5.4inch";
    // h2.weight = "63kg";

    // calling the behaviors of human two
    // h2.walk();

    // Human h1("Muhammad", 20, "5.6inch", "63kg"); // Here, Stack is working beghind to manage these classes.

    // Human h2 = h1;

    // cout << h2.name << " " << h1.name << endl;

    // Dynamic way to manage the object 
    Human *h3 = new Human("Azam", 24, "5.8inch", "80kg");
    cout << h3->name << endl;
    h3->walk();

    // When we are using Heap to manage the things then we have to manually call the destructor to free the memory
    delete h3;

    return 0;
}