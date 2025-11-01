#include "CustomItem.h"
#include "IceCreamItem.h"
#include <iomanip>

#include <sstream>
#include <iostream>

CustomItem::CustomItem(std::string size) : IceCreamItem(size){
    if(size == "large"){
        price = 6.50;

    }else if(size == "medium"){
        price = 5.00;

    }else if(size == "small"){
        price = 3.00;
    }
    
}

 CustomItem ::~CustomItem(){

}

void CustomItem::addTopping(std::string topping) {
    auto it = toppings.find(topping);
    if (it != toppings.end()) {
        it->second++;
    } else {
        toppings.insert({topping, 1});
}
    price += 0.40;
}

double CustomItem::getPrice(){
    return price;
}

std::string CustomItem::composeItem(){
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Custom Size: " << size << std::endl;
    output << "Toppings:" << std::endl;

    for (auto &pair : toppings) {
        output << pair.first << ": " << pair.second << " oz" << std::endl;
    }

    output << "Price: $" << price << std::endl;
    return output.str();

}

