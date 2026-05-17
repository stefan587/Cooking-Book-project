#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>
#include <iostream>
#include "Ingredient.h"

using namespace std;

class Recipe {
private:
    string name;
    vector<Ingredient> ingredients;
    vector<string> steps;
    vector<string> tags;

public:

    Recipe() {
        name = "";
    }

    void setName(string recipeName) {
        name = recipeName;
    }

    string getName() {
        return name;
    }

    void printRecipe() {
        cout << "Recipe: " << name << endl;
    }
};

#endif
