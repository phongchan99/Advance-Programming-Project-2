#pragma once
#include <string>
#include "Customer.h"
#include "Item.h"

using namespace std;

class Regular :public Customer {
public:
	Regular();
	Regular(string id, string name, string address, string phone, int borrowNumber, string customerType);

	CustomerType getCustomerType() {
		return CustomerType::Regular;
	}
	bool borrowing(Item* item);
	void returnItem(Item* item);
	void toString();
	string toFile();

private:
	string id;
	string name;
	string address;
	string phone;
	int borrowNumber;
	Item* item;
};