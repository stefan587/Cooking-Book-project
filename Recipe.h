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

    void addIngredient(Ingredient ingredient) {
        ingredients.push_back(ingredient);
    }

    vector<Ingredient> getIngredients() {
        return ingredients;
    }

    void printRecipe() {

        cout << "Recipe: " << name << endl;

        cout << "Ingredients:" << endl;

        for (int i = 0; i < ingredients.size(); i++) {

            cout << "- "
                 << ingredients[i].getName()
                 << " "
                 << ingredients[i].getQuantity()
                 << " "
                 << ingredients[i].getUnit()
                 << endl;
        }
    }
};

#endif