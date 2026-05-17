#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

using namespace std;

class Ingredient {
private:
    string name;
    double quantity;
    string unit;

public:
    Ingredient() {
        name = "";
        quantity = 0;
        unit = "";
    }
};

#endif