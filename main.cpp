#include <iostream>
#include "RecipeManager.h"
#include "MealPlanner.h"

using namespace std;

int main() {

    RecipeManager manager;
    MealPlanner planner;

    int choice;

    do {

        cout << endl;
        cout << "=== Cooking Book Menu ===" << endl;
        cout << "1. Add Recipe" << endl;
        cout << "2. Show Recipes" << endl;
        cout << "3. Search Recipe By Name" << endl;
        cout << "4. Search By Ingredient" << endl;
        cout << "5. Search By Tag" << endl;
        cout << "6. Scale Recipe" << endl;
        cout << "7. Add Meal To Day" << endl;
        cout << "8. Show Weekly Menu" << endl;
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
        
        case 4:
            manager.searchByIngredient();
            break;
        
        case 5:
        manager.searchByTag();
        break;    

        case 6:
            manager.scaleRecipeByName();
            break;    
        case 7: {

        int day;
        string recipeName;

        cout << "Enter day (1-7): ";
        cin >> day;

        cout << "Enter recipe name: ";
        cin.ignore();
        getline(cin, recipeName);

        planner.setMeal(day, recipeName);

        break;
        }

        case 8:
        planner.showMenu();
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