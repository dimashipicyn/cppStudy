//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>
class Base {
public:
    virtual ~Base() {};
};

class A : public Base {
public:
    ~A() {}
};

class B : public Base {
public:
    ~B() {}
};

class C : public Base {
public:
    ~C() {}
};

Base *generate()
{
    int r = rand() % 3;
    switch (r) {
        case 0: {
            std::cout << "Create A" << std::endl;
            return new A;
        }
        case 1: {
            std::cout << "Create B" << std::endl;
            return new B;
        }
        case 2: {
            std::cout << "Create C" << std::endl;
            return new C;
        }
        default: {
            std::cout << "Error! Not case" << std::endl;
            exit(1);
        }
    }
}

void identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a) {
        std::cout << "Pointer is A" << std::endl;
        delete a;
    }
    if (b) {
        std::cout << "Pointer is B" << std::endl;
        delete b;
    }
    if (c) {
        std::cout << "Pointer is C" << std::endl;
        delete c;
    }
}

void identify(Base& p)
{
    try {
        A &a = dynamic_cast<A &>(p);
        delete &a;
        std::cout << "Reference is A" << std::endl;
        return;
    }
    catch (std::exception &e) {}

    try {
        B &b = dynamic_cast<B &>(p);
        delete &b;
        std::cout << "Reference is B" << std::endl;
        return;
    }
    catch (std::exception &e) {}

    try {
        C &c = dynamic_cast<C &>(p);
        delete &c;
        std::cout << "Reference is C" << std::endl;
        return;
    }
    catch (std::exception &e) {}
}

int main()
{
    srand(time(NULL));

    std::cout << "Pointer identify" << std::endl;
    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    identify(generate());
    std::cout << "Reference identify" << std::endl;
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());
    identify(*generate());
    return 0;
}

