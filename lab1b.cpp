#include <iostream>

// Base class
class Worker {
protected:
   std::string fullName;
public:
   Worker(const std::string& workerName) : fullName(workerName) {
       std::cout << "Worker constructor called for " << fullName << std::endl;
   }

   virtual ~Worker() {
       std::cout << "Worker destructor called for " << fullName << std::endl;
   }
};

// Derived class: Supervisor
class Supervisor : public Worker {
public:
   Supervisor(const std::string& supName) : Worker(supName) {
       std::cout << "Supervisor constructor called for " << fullName << std::endl;
   }

   ~Supervisor() {
       std::cout << "Supervisor destructor called for " << fullName << std::endl;
   }
};

// Derived class: Engineer
class Engineer : public Worker {
public:
   Engineer(const std::string& engName) : Worker(engName) {
       std::cout << "Engineer constructor called for " << fullName << std::endl;
   }

   ~Engineer() {
       std::cout << "Engineer destructor called for " << fullName << std::endl;
   }
};

int main() {
   Worker* worker1 = new Supervisor("Anna");
   Worker* worker2 = new Engineer("John");

   delete worker1;  // Calls Supervisor's destructor, then Worker's
   delete worker2;  // Calls Engineer's destructor, then Worker's

   return 0;
}
