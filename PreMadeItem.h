#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamOrder.h"
#include <string>



class PreMadeItem: public IceCreamItem{

    public: 
        PreMadeItem(std::string name, std::string size);

        virtual ~PreMadeItem();

        virtual double getPrice() override;

        virtual std::string composeItem() override;


    private:
        std::string name;

};

#endif