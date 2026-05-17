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

    Ingredient(string n, double q, string u) {
        name = n;
        quantity = q;
        unit = u;
    }

    string getName() {
        return name;
    }

    double getQuantity() {
        return quantity;
    }

    string getUnit() {
        return unit;
    }
};

#endif