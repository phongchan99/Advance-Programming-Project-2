#include <string>
#include "Customer.h"
#include "Item.h"

using namespace std;

Customer::Customer(string id, string name, string address, string phone, int borrowNumber, string customerType) {
	this->id = id;
	this->name = name;
	this->address = address;
	this->phone = phone;
}

Customer::~Customer() {};

string Customer::getID() {
	return id;
}

string Customer::getName() {
	return name;
}

string Customer::getPhone() {
	return phone;
}

string Customer::getAddress() {
	return address;
}



