#include "PreMadeItem.h"
#include "IceCreamItem.h"
#include <iomanip>
#include <sstream>
#include <iostream>

PreMadeItem:: PreMadeItem(std::string name, std::string size): IceCreamItem(size){
    this->name = name;

    if(size == "large"){
        price = 7.50;

    }else if(size =="medium"){
        price = 6.00;

    }else if(size == "small"){
        price = 4.00;

    }
}
    
PreMadeItem ::~PreMadeItem(){

}

double PreMadeItem::getPrice(){
    return price;
}
 std::string PreMadeItem::composeItem(){
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Pre-made Size: " << size << std::endl;
    output << "Pre-made Item: " << name << std::endl;
    output << "Price: $" << price << std::endl;
    return output.str();
 }