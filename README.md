# OOPcConcept
Object-Orientated Examples in C++

Explanation of the Program:

Animal Class:
Attributes: name and age are encapsulated (hidden) within the class and accessed via getter and setter methods (getName(), setName(), getAge(), setAge()).
Constructor: Initializes name and age.
Virtual Function: makeSound() is declared as virtual, allowing for polymorphism (dynamic dispatch) in derived classes.

Dog Class (Derived from Animal):
Inheritance: Inherits name and age attributes from Animal.
Additional Attributes: breed is specific to Dog and encapsulated with its own getter and setter (getBreed(), setBreed()).
Constructor: Initializes name, age, and breed.
Polymorphism: Overrides the makeSound() function to provide a specific behavior for Dog.

Main Function:
Object Creation: Creates instances of Animal (animal) and Dog (dog).
Accessors and Mutators: Demonstrates accessing and updating object attributes using getter and setter methods.
Polymorphism: Uses a pointer to Animal (animalPtr) to demonstrate polymorphic behavior, where calling makeSound() on animalPtr invokes the overridden function in Dog.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Key OOP Concepts Illustrated:

Classes and Objects: Animal and Dog are classes, and animal and dog are objects instantiated from these classes.

Encapsulation: Data (name, age, breed) is encapsulated within classes and accessed via methods, ensuring data integrity.

Inheritance: Dog inherits attributes and behaviors from Animal, promoting code reuse.

Polymorphism: makeSound() method is overridden in Dog and accessed through a base class pointer (Animal*), demonstrating runtime polymorphism.

Abstraction: Users interact with objects (animal, dog) through high-level interfaces (methods), hiding internal implementation details.
