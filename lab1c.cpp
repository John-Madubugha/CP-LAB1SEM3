#include <iostream>

// Abstract base class
class Creature {
public:
   virtual void makeSound() const = 0;  // Pure virtual function
   virtual ~Creature() {}  // Virtual destructor
};

// Derived class: Canine
class Canine : public Creature {
public:
   void makeSound() const override {
       std::cout << "Bark!" << std::endl;
   }
};

// Derived class: Feline
class Feline : public Creature {
public:
   void makeSound() const override {
       std::cout << "Purr!" << std::endl;
   }
};

int main() {
   Creature* c1 = new Canine();
   Creature* c2 = new Feline();

   c1->makeSound();  // Output: Bark!
   c2->makeSound();  // Output: Purr!

   delete c1;  // Properly destruct the Canine object
   delete c2;  // Properly destruct the Feline object

   return 0;
}
