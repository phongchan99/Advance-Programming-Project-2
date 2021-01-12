#pragma once

#include "Item.h"

class DVD : public Item {
    private: string genre;
    public:
    DVD();

    DVD(string id, string title, string rentalPeriod, ,
    int inStock, float rentalFee, Status status, string genre);

    string getGenre();
    void setGenre(string genre);
}