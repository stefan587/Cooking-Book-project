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

    int ingredientCount;

    cout << "How many ingredients: ";
    cin >> ingredientCount;

    for (int i = 0; i < ingredientCount; i++) {

        string ingredientName;
        double quantity;
        string unit;

        cout << "Ingredient name: ";
        cin >> ingredientName;

        cout << "Quantity: ";
        cin >> quantity;

        cout << "Unit: ";
        cin >> unit;

        Ingredient ingredient(ingredientName, quantity, unit);

        recipe.addIngredient(ingredient);
    }

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

    void searchByIngredient() {

    string ingredientName;

    cout << "Enter ingredient name: ";

    cin.ignore();
    getline(cin, ingredientName);

    bool found = false;

    for (int i = 0; i < recipes.size(); i++) {

        vector<Ingredient> ingredients = recipes[i].getIngredients();

        for (int j = 0; j < ingredients.size(); j++) {

            if (ingredients[j].getName() == ingredientName) {

                recipes[i].printRecipe();

                found = true;
            }
        }
    }

    if (!found) {
        cout << "No recipes found with this ingredient." << endl;
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