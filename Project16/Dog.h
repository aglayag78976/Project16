#pragma once
#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
    Dog(const string& name) : Pet(name) {}

    void Sound() const override {
        cout << "Woof!" << endl;
    }

    void Type() const override {
        cout << "Type: Dog" << endl;
    }
};

#endif // DOG_H
