#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
protected:
    string name;
    int age;

public:
    // Constructor
    Animal(string _name, int _age) : name(_name), age(_age) {}

    // Virtual function for polymorphism
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(string _name) {
        name = _name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int _age) {
        age = _age;
    }
};

// Derived class
class Dog : public Animal {
private:
    string breed;
    string color;

public:
    // Constructor using initializer list to call base class constructor
    Dog(string _name, int _age, string _breed, string _color) : Animal(_name, _age), breed(_breed), color(_color) {}

    // Override makeSound function
    void makeSound() override {
        cout << "Woof!" << endl;
    }

    // Getter for breed
    string getBreed() const {
        return breed;
    }

    // Setter for breed
    void setBreed(string _breed) {
        breed = _breed;
    }

    // Getter for breed
    string getColor() const {
        return color;
    }

    // Setter for breed
    void setColor(string _color) {
        breed = _color;
    }
};

int main() {
    // Create an Animal object
    Animal animal("Generic Animal", 5);
    
    // Using getters
    cout << "Animal name: " << animal.getName() << endl;
    cout << "Animal age: " << animal.getAge() << " years" << endl;
    
    // Using setters
    animal.setName("Milo");
    animal.setAge(3);
    
    // Output updated information
    cout << "Updated animal name: " << animal.getName() << endl;
    cout << "Updated animal age: " << animal.getAge() << " years" << endl;
    
    // Create a Dog object
    Dog dog("Buddy", 2, "Labrador", "Black");
    
    // Using getters from base class
    cout << "Dog name: " << dog.getName() << endl;
    cout << "Dog age: " << dog.getAge() << " years" << endl;
    
    // Using additional getters from derived class
    cout << "Dog breed: " << dog.getBreed() << endl;
    cout << "Dog color: " << dog.getColor() << endl;
    
    // Polymorphism example
    Animal *animalPtr = &dog; // Pointer to base class pointing to derived class object
    animalPtr->makeSound(); // Calls Dog's overridden makeSound function
  
    return 0;
}