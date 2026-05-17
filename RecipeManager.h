#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include <vector>
#include "Recipe.h"

using namespace std;

class RecipeManager {
private:
    vector<Recipe> recipes;

public:
    RecipeManager() {
    }
};

#endif