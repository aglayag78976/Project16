#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"
using namespace std;

int main() {
    Pet* pets[] = {
        new Dog("Buddy"),
        new Cat("Whiskers"),
        new Parrot("Polly"),
        new Hamster("Nibbles")
    };

    for (Pet* pet : pets) {
        pet->Show();
        pet->Type();
        pet->Sound();
        cout << endl;
    }

    for (Pet* pet : pets) {
        delete pet;
    }

    return 0;
}
