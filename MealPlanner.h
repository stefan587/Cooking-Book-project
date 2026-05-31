#ifndef MEALPLANNER_H
#define MEALPLANNER_H

#include <vector>
#include <string>

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

    MealPlanner() {
        weeklyMenu.resize(7);
    }
};

#endif