#include <iostream>

// Base class
class GeometricShape {
public:
   virtual double calculateArea() const = 0;
   virtual ~GeometricShape() {}
};

// Derived base class with additional property
class TexturedShape : public GeometricShape {
protected:
   std::string texture;
public:
   TexturedShape(const std::string& tex) : texture(tex) {}

   std::string getTexture() const {
       return texture;
   }
};

// Derived class: TexturedRectangle
class TexturedRectangle : public TexturedShape {
private:
   double length, width;
public:
   TexturedRectangle(double l, double w, const std::string& tex)
       : TexturedShape(tex), length(l), width(w) {}

   double calculateArea() const override {
       return length * width;
   }

   void showDetails() const {
       std::cout << "Texture: " << texture << ", Area: " << calculateArea() << std::endl;
   }
};

int main() {
   TexturedRectangle rect(5.0, 3.0, "Patterned");
   rect.showDetails();  // Output: Texture: Patterned, Area: 15

   return 0;
}

