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