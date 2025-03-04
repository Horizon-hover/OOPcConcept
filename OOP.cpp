#include <iostream>
#include <string>
#include <memory> // For smart pointers
#include <limits> // For std::numeric_limits
#include <cstdio> // For getchar()

// Using aliases for readability
using std::cout;
using std::endl;
using std::string;
using std::string_view;

// Function to prompt the user to press a key to exit
void promptExit() {
    cout << "\nPress any key to exit..." << endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
    getchar(); // Wait for a key press
}

// Base class
class Animal {
protected:
    string name;
    int age;

public:
    // Constructor
    Animal(string_view _name, int _age) : name(_name), age(_age) {}

    // Virtual destructor for proper cleanup
    virtual ~Animal() = default;

    // Virtual function for polymorphism
    virtual void makeSound() const {
        cout << "Animal sound" << endl;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(string_view _name) {
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
    Dog(string_view _name, int _age, string_view _breed, string_view _color)
        : Animal(_name, _age), breed(_breed), color(_color) {}

    // Override makeSound function
    void makeSound() const override {
        cout << "Woof!" << endl;
    }

    // Getter for breed
    string getBreed() const {
        return breed;
    }

    // Setter for breed
    void setBreed(string_view _breed) {
        breed = _breed;
    }

    // Getter for color
    string getColor() const {
        return color;
    }

    // Setter for color
    void setColor(string_view _color) {
        color = _color;
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
    std::unique_ptr<Animal> animalPtr = std::make_unique<Dog>(dog); // Smart pointer to base class
    animalPtr->makeSound(); // Calls Dog's overridden makeSound function

    // Prompt the user to press a key to exit
    promptExit();

    return 0;
}