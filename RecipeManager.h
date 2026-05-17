#ifndef RECIPEMANAGER_H
#define RECIPEMANAGER_H

#include <vector>
#include <iostream>
#include "Recipe.h"

using namespace std;

class RecipeManager {
private:
    vector<Recipe> recipes;

public:

    void addRecipe() {

        Recipe recipe;

        string name;

        cout << "Enter recipe name: ";
        cin.ignore();
        getline(cin, name);

        recipe.setName(name);

        recipes.push_back(recipe);

        cout << "Recipe added successfully!" << endl;
    }

    void showRecipes() {

        if (recipes.size() == 0) {
            cout << "No recipes available." << endl;
            return;
        }

        for (int i = 0; i < recipes.size(); i++) {
            cout << i + 1 << ". ";
            recipes[i].printRecipe();
        }
    }
};

#endif