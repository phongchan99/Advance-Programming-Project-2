// assignment2_draft1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Item.h"
#include <fstream>
#include <sstream>

using namespace std;

// Function to print menu in command window
void printMenu() {
	cout	<< "Welcome to Genie�s video store" << endl
			<< "Enter an option below." << endl
			<< "1.	Add a new item, update or delete an existing item" << endl
			<< "2.	Add new customer or update an existing customer" << endl
			<< "3.	Promote an existing customer" << endl
			<< "4.	Rent an item" << endl
			<< "5.	Return an item" << endl
			<< "6.	Display all items" << endl
			<< "7.	Display out-of-stock items" << endl
			<< "8.	Display all customers" << endl
			<< "9.	Display group of customers" << endl
			<< "10.	Search items or customers" << endl
			<< "Exit." << endl;
	
	return;
}

void scanItem(char *fileName) {

    // Open the file
    ifstream infile(fileName, ios::in);

    string line; // Initialise for scanning
    while (!infile.eof()) {
        string ID;
        string title, rentType, loanType;
        string numberOfCopies, rentalFee;
        string category;
        getline(infile, line);
        stringstream ss(line);
        // Scan all line of the file
        getline(ss, ID, ',');
        if (ID[0] != 'I') {
            continue;
        }
        getline(ss, title, ',');

        getline(ss, rentType, ',');
        getline(ss, loanType, ',');
        getline(ss, numberOfCopies, ',');

        if (rentType != "Game") {
            getline(ss, rentalFee, ',');
            getline(ss, category);
        } else {
            getline(ss, rentalFee);
        }
		cout << ID << "," << title << "," << rentType << "," << loanType << "," << numberOfCopies << "," << rentalFee << "," << endl;
	}
 // Close the file after open
    infile.close();
}

void scanCustomer() {
	
}

int main(int argc, char *argv[])
{
	scanItem(argv[1]);
	// DVD::DVD(string id, string title, Genre genre, float rentalFee)
	// DVD* dvd = new DVD("s1", "title1", Genre::COMEDY, 0.1);

	return 0;
}
