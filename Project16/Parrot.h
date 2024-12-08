#pragma once
#ifndef PARROT_H
#define PARROT_H

#include "Pet.h"

class Parrot : public Pet {
public:
    Parrot(const string& name) : Pet(name) {}

    void Sound() const override {
        cout << "Squawk!" << endl;
    }

    void Type() const override {
        cout << "Type: Parrot" << endl;
    }
};

#endif // PARROT_H
