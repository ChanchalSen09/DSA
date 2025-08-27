#include <iostream>
using namespace std;

// 1. Single Inheritance
class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};

// 2. Multiple Inheritance
class A {
public:
    void showA() { cout << "Class A\n"; }
};

class B {
public:
    void showB() { cout << "Class B\n"; }
};

class C : public A, public B {
public:
    void showC() { cout << "Class C\n"; }
};

// 3. Multilevel Inheritance
class Vehicle {
public:
    void move() { cout << "Moving...\n"; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Driving car...\n"; }
};

class SportsCar : public Car {
public:
    void race() { cout << "Racing sports car...\n"; }
};

// 4. Hierarchical Inheritance
class Base {
public:
    void baseFunc() { cout << "Base function\n"; }
};

class Derived1 : public Base {
public:
    void derived1Func() { cout << "Derived1 function\n"; }
};

class Derived2 : public Base {
public:
    void derived2Func() { cout << "Derived2 function\n"; }
};

// 5. Hybrid Inheritance (combination)
class X {
public:
    void showX() { cout << "Class X\n"; }
};

class Y : public X {
public:
    void showY() { cout << "Class Y\n"; }
};

class Z : public X, public A {
public:
    void showZ() { cout << "Class Z\n"; }
};

int main() {
    // Single Inheritance
    Dog d;
    d.eat();
    d.bark();

    // Multiple Inheritance
    C c;
    c.showA();
    c.showB();
    c.showC();

    // Multilevel Inheritance
    SportsCar sc;
    sc.move();
    sc.drive();
    sc.race();

    // Hierarchical Inheritance
    Derived1 d1;
    Derived2 d2;
    d1.baseFunc();
    d1.derived1Func();
    d2.baseFunc();
    d2.derived2Func();

    // Hybrid Inheritance
    Z z;
    z.showX();
    z.showA();
    z.showZ();

    return 0;
}