#pragma once
#ifndef HAMSTER_H
#define HAMSTER_H

#include "Pet.h"

class Hamster : public Pet {
public:
    Hamster(const string& name) : Pet(name) {}

    void Sound() const override {
        cout << "Squeak!" << endl;
    }

    void Type() const override {
        cout << "Type: Hamster" << endl;
    }
};

#endif // HAMSTER_H
