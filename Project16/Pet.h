#pragma once
#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
protected:
    string name;

public:
    Pet(const string& name) : name(name) {}
    virtual ~Pet() {}

    virtual void Sound() const = 0;
    virtual void Show() const {
        cout << "Name: " << name << endl;
    }
    virtual void Type() const = 0;
};

#endif // PET_H
