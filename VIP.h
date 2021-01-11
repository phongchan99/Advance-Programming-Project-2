#pragma once
#include <string>
#include "Customer.h"
#include "Item.h"

using namespace std;

class VIP : public Customer {
public:
	VIP();
	VIP(string id, string name, string address, string phone, int borrowNumber, string customerType, int point);

	CustomerType getCustomerType() {
		return CustomerType::VIP;
	}
	bool borrowing(Item* item);
	void returnItem(Item* item);
	int getPoint();
	void setPoint(int point);
	bool checkPoint();
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