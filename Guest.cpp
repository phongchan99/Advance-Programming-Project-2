#pragma once

#include <iostream>
#include <string>
#include "Item.h"
#include "Guest.h"

#define MAXBORROW 2

using namespace std;

Guest::Guest(string id, string name, string address, string phone, int borrowNumber, string customerType) :Customer() {
	this->id = id;
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->borrowNumber = 0;
	for (int i = 0; i < MAXBORROW; i++) {
		this->borrowList[i] = NULL;
	}
}
Guest::~Guest() {};

string Guest::getID() {
	return this->id;
}

string Guest::getName() {
	return this->name;
}

string Guest::getPhone() {
	return this->phone;
}

string Guest::getAddress() {
	return this->address;
}

bool Guest::borrowing(Item* item) {
	//check if the guest member already borrowed 2 items
	if (borrowNumber >= MAXBORROW) {
		cout << "Borrow failed be cause member " << this->getID() << " have borrowed " << MAXBORROW << " items!" << endl;
		return false;
	}

	if (item->borrowing()) {
		cout << "Member " << this->getID() << " borrowed item: " << item->getTitle() << endl;
		this->borrowList[borrowNumber++] = item;
		return true;
	}

	// if failed to borrow then the item is not available
	cout << "The item id " << item->getID() << " is not available!" << endl;
	return false;
}

bool Guest::returning(Item* item){
	bool scan = false;

	for (int i = 0; i < MAXBORROW; i++){
		if (this->borrowList[i] != NULL) {
			if (item->getID().compare(this->borrowList[i]->getID())==0){
				scan = true;
				break;
			}
		}
	}

	if (!scan) {
		cout << "Member " << this->getID() << " does not borrow item: " << item->getTitle() << endl;
		return false;
	}

	if (item->returning()) {
		cout << "Member " << this->getID() << " returned item: " << item->getTitle() << endl;
		this->borrowList[borrowNumber--] = NULL;
		return true;
	}

	cout << "The item id " << item->getID() << " is available so returning failed!" << endl;
	return false;
}