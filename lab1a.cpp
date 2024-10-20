#include <iostream>

// Abstract base class
class Polygon {
public:
   // Pure virtual function
   virtual double calculateArea() const = 0;
   virtual ~Polygon() {}  // Virtual destructor
};

// Derived class
class Quadrilateral : public Polygon {
private:
   double length, breadth;
public:
   // Constructor with initializer list
   Quadrilateral(double l, double b) : length(l), breadth(b) {}

   // Override the pure virtual function
   double calculateArea() const override {
       return length * breadth;
   }
};

int main() {
   Quadrilateral quad(5.0, 3.0);
   std::cout << "Quadrilateral area: " << quad.calculateArea() << std::endl;
   return 0;
}

