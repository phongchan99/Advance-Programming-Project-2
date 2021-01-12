#include "DVD.h"

using namespace std;

DVD::DVD(string id, string title, RentalType rentType, LoanType loanType,
        int inStock, float rentalFee, string genre):Item(id, title, rentType, loanType,
        inStock, rentalFee) {
    this -> genre = genre;
}

DVD::DVD() {}

string DVD::getGenre() {
    return genre;
}

void DVD::setGenre(string genre) {
    DVD::genre = genre;
}

void DVD::toString() {
    cout << id << "," << title << "," << rentType << "," << inStock << "," << rentalFee << "," << genre << endl; 
}

string DVD::toFile() {
    return id + "," + title + "," + rentType + "," + loanType + "," + inStock + "," + rentalFee + "," + genre;
}