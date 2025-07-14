//
// Created by Brian Grouzos on 7/12/2025.
//
#include <string>
#include "Ingredients.h"

using namespace std;

// Constructor for IceCream class
IceCream::IceCream(string name, string quantityType, int maxQuantity) {
        setName(name);
        setQuantityType(quantityType);
        setMaxQuantity(maxQuantity);
}

// Contstructor for Toppings class
Toppings::Toppings(string name, string quantityType, int maxQuantity) {
        setName(name);
        setQuantityType(quantityType);
        setMaxQuantity(maxQuantity);
}

// Constructor for Sauce class
Sauce::Sauce(string name, string quantityType, int maxQuantity) {
        setName(name);
        setQuantityType(quantityType);
        setMaxQuantity(maxQuantity);
}



