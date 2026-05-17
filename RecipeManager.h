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

    void searchByName() {

    string searchName;

    cout << "Enter recipe name to search: ";

    cin.ignore();
    getline(cin, searchName);

    bool found = false;

    for (int i = 0; i < recipes.size(); i++) {

        if (recipes[i].getName() == searchName) {

            cout << "Recipe found:" << endl;
            recipes[i].printRecipe();

            found = true;
        }
    }

    if (!found) {
        cout << "Recipe not found." << endl;
    }
}
};

#endif