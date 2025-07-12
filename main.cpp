#include <iostream>
#include <vector>

#include "Ingredients.h"
using namespace std;

int main() {
    cout << "Program started" << endl;
    vector<Ingredients> ingredients;
    int choice = 0;
    int quantity = 0;
    IceCream vanilla = IceCream("Vanilla", "scoops", 3);
    IceCream chocolate = IceCream("Chocolate", "scoops", 3);
    IceCream strawberry = IceCream("Strawberry", "scoops", 3);
    Toppings sprinkles = Toppings("Sprinkles", "Tablespoon", 3);
    Sauce hotFudge = Sauce("HotFudge", "Spoonful", 2);

    cout << "Classes Created" << endl;

    ingredients.push_back(vanilla);
    ingredients.push_back(chocolate);
    ingredients.push_back(strawberry);
    ingredients.push_back(sprinkles);
    ingredients.push_back(hotFudge);

    cout << "Classes Added" << endl;


    for (Ingredients ingredient : ingredients) {
        ingredient.Print();
    }

    cout << "Please choose a flavor: ";
    cin >> choice;
    cout << "quantity? ";
    cin >> quantity;
    if (ingredients[choice-1].checkQuantity(quantity)) {
        ingredients[choice-1].setQuantity(quantity);
        ingredients[choice-1].setIncluded(true);
    } else {
        cout << "Quantity is too high" << endl;
    }

    ingredients[choice-1].Print();
    cout << ingredients[choice-1].getIncluded();
}