//
// Created by bsx2c on 7/12/2025.
//

#ifndef INGREDIENTS_H
#define INGREDIENTS_H
#include <string>
#include <iostream>
using namespace std;

/**
 * Class Ingredients - parent class for various sundae ingredients
 *
 * Includes methods for setting various variables, print statement, check quantities, etc.
 *
 */

class Ingredients {
private:
    int maxQuantity = 0;        // max quantity allowed of ingredient
    string quantityType;        // type of quantity, i.e. spoons, scoops, etc.
    int quantity = 0;           // actual quantity chosen
    bool included = false;      // has it been included already
    string name;                // name of the ingredient, i.e chocolate, sprinkles, etc.


public:
    // method to check that the quantity selected is less than maxQuantity allowed
    bool checkQuantity(int quantity) {
        if (quantity > maxQuantity) {
            return false;
        }
        return true;
    }

    // Getters and Setters
    int getMaxQuantity() const {
        return maxQuantity;
    }

    string getQuantityType() const {
        return quantityType;
    }

    int getQuantity() const {
        return quantity;
    }

    bool getIncluded() const {
        return included;
    }

    string getName() const {
        return name;
    }

    void setIncluded(bool included) {
        this->included = included;
    }

    void setName(string name) {
        this->name = name;
    }

    void setMaxQuantity(int maxQuantity) {
        this->maxQuantity = maxQuantity;
    }

    void setQuantityType(string quantityType) {
        this->quantityType = quantityType;
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
    }

    // modify the print statement to output the expected output
    void Print() const {
        cout << name << " (" << quantity << " " << quantityType << ")" << endl;
    }
};

/**
 * Class IceCream - child class of Ingredients, used for ice cream flavors
 *
 * Includes constructor method for setting required initial variables
 *
 */

class IceCream : public Ingredients {
public:
    IceCream(string name, string quantityType, int maxQuantity);

    IceCream() = default;
};

/**
 * Class Toppings - child class of Ingredients, used for toppings
 *
 * Includes constructor method for setting required initial variables
 *
 */

class Toppings : public Ingredients {
public:
    Toppings(string name, string quantityType, int maxQuantity);

    Toppings() = default;
};

/**
 * Class Sauce - child class of Ingredients, used for sauces
 *
 * Includes constructor method for setting required initial variables
 *
 */
class Sauce : public Ingredients {
public:
    Sauce(string name, string quantityType, int maxQuantity);

    Sauce() = default;
};
#endif //INGREDIENTS_H
