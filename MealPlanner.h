#ifndef MEALPLANNER_H
#define MEALPLANNER_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class MealPlanner {

private:
    vector<string> weeklyMenu;

public:
    void setMeal(int day, string recipeName) {

        if (day >= 1 && day <= 7) {
         weeklyMenu[day - 1] = recipeName;
         cout << "Meal added successfully!" << endl;
        }
        else {
         cout << "Invalid day. Please enter a number between 1 and 7." << endl;
        }
    }
    void showMenu() {

    for (int i = 0; i < 7; i++) {
        cout << "Day "
             << i + 1
             << ": "
             << weeklyMenu[i]
             << endl;
    }
}

    MealPlanner() {
        weeklyMenu.resize(7);
    }
};

#endif  