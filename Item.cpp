#pragma once

#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

Item::Item() {

}

Item::Item(string id, string title, string category, string rentalPeriod, float rentalFee, string genre) {
	this -> id = id;
	this -> title = title;
	this -> category = category;
	this -> rentalPeriod = rentalPeriod;
	this -> rentalFee = rentalFee;
	this -> genre = genre;	
}

Item::~Item() {
	cout << "All the copies of this item are now being removed from stock." << endl;
}

string Item::getId() {
	return this->id;
}

string Item::getTitle() {
	return this->title;
}

string Item::getGenre() {
	return this->genre;
}

string Item::getRentalPeriod() {
	return this-> rentalPeriod;
}

int Item::getInStock() {
	return this->inStock;
}

bool Item::getStatus() {
	return this->status;
}

bool Item::addCopies(int num)
{
	this->inStock += num;
	cout << "added " << num << " " << this->title << " currently has: " + this->inStock << endl;
	return true;
}

