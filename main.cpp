#include <iostream>
#include <vector>
#include <string>
#include "Ingredients.h"
using namespace std;

int main() {

    // Create vector of ingredients to store objects
    vector<Ingredients> ingredients;

    // Create variables to store choice and quantity
    int choice = 0;
    int quantity = 0;
    string menu;

    // Create objects of each class of item
    IceCream vanilla = IceCream("Vanilla", "scoops", 3);
    IceCream chocolate = IceCream("Chocolate", "scoops", 3);
    IceCream strawberry = IceCream("Strawberry", "scoops", 3);
    Toppings sprinkles = Toppings("Sprinkles", "Tablespoon", 3);
    Toppings crushedOreos = Toppings("Crushed Oreos", "Tablespoon", 3);
    Toppings cherries = Toppings("Cherries", "Piece(s)", 5);
    Sauce hotFudge = Sauce("HotFudge", "Spoonful", 2);
    Sauce caramelSauce = Sauce("CaramelSauce", "Spoonful", 2);

    // Push items to the vector for easy retrieval
    ingredients.push_back(vanilla);
    ingredients.push_back(chocolate);
    ingredients.push_back(strawberry);
    ingredients.push_back(sprinkles);
    ingredients.push_back(crushedOreos);
    ingredients.push_back(cherries);
    ingredients.push_back(hotFudge);
    ingredients.push_back(caramelSauce);

    // Greet the customer
    cout << "Welcome to the Custom Ice Cream Builder!" << endl;

    cout << "Select your base ice cream flavor: ";
    menu = "1. Vanilla\n2. Chocolate\n3. Strawberry\n";
    //FIXME input validation goes here.

    cout << menu;
    cin >> choice;


    menu = "How many scoops? (1-3)\n";
    //FIXME send to input validation
    cout << menu;
    cin >> quantity;

    if (ingredients[choice-1].checkQuantity(quantity)) {
    ingredients[choice+1].setQuantity(quantity);
    ingredients[choice+1].setIncluded(true);
    } else {
    cout << "Quantity is too high." << endl;
    //FIXME send back to original input validation
}

    //FIXME Do the same for toppings and sauces
    //FIXME need to check if getIncluded() == true on toppings to avoid duplicates

    // test set toppings and sauces
    ingredients[3].setQuantity(2);
    ingredients[5].setQuantity(1);
    ingredients[7].setQuantity(1);
    ingredients[3].setIncluded(true);
    ingredients[5].setIncluded(true);
    ingredients[7].setIncluded(true);

    for (Ingredients ingredient : ingredients) {
        if (ingredient.getIncluded()) {
            ingredient.Print();
        }
    }

}