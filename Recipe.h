#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>
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
};

#endif