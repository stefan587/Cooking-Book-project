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
    
    void addTag(string tag) {
        tags.push_back(tag);
        }

    vector<string> getTags() {
        return tags;
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

    void scaleRecipe(double multiplier) {

    cout << "Scaled Recipe: " << name << endl;

    for (int i = 0; i < ingredients.size(); i++) {

        double scaledQuantity =
            ingredients[i].getQuantity() * multiplier;

        cout << "- "
             << ingredients[i].getName()
             << " "
             << scaledQuantity
             << " "
             << ingredients[i].getUnit()
             << endl;
    }
}
};

#endif