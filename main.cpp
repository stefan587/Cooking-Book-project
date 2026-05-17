#include <iostream>
#include "RecipeManager.h"

using namespace std;

int main() {

    RecipeManager manager;

    int choice;

    do {

        cout << endl;
        cout << "=== Cooking Book Menu ===" << endl;
        cout << "1. Add Recipe" << endl;
        cout << "2. Show Recipes" << endl;
        cout << "3. Search Recipe By Name" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {

        case 1:
            manager.addRecipe();
            break;

        case 2:
            manager.showRecipes();
            break;
           
        case 3:
            manager.searchByName();
            break;    

        case 0:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}