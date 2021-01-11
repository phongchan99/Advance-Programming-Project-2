#pragma once
#include <string>
#include "Customer.h"
#include "Item.h"

#define MAXBORROW 2;

using namespace std;

class Guest :public Customer {
public:
	Guest();
	Guest(string id, string name, string address, string phone, int borrowNumber, string customerType);
	~Guest();

	CustomerType getCustomerType() {
		return CustomerType::Guest;
	}

	string getID();
	string getName();
	string getAddress();
	string getPhone();
	bool borrowing(Item* item);
	bool returning(Item* item);
	void toString();
	string toFile();

private:
	string id;
	string name;
	string address;
	string phone;
	int borrowNumber;
	Item* borrowList[MAXBORROW];

};