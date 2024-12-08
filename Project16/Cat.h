#pragma once
#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
public:
    Cat(const string& name) : Pet(name) {}

    void Sound() const override {
        cout << "Meow!" << endl;
    }

    void Type() const override {
        cout << "Type: Cat" << endl;
    }
};

#endif // CAT_H
