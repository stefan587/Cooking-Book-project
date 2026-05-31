#ifndef MEALPLANNER_H
#define MEALPLANNER_H

#include <vector>
#include <string>

using namespace std;

class MealPlanner {

private:
    vector<string> weeklyMenu;

public:

    MealPlanner() {
        weeklyMenu.resize(7);
    }
};

#endif