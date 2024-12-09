#include "borrow.h"

Borrow::Borrow(const std::string& _idClient, const std::string& _ISBN, Date _date)
    : idClient(_idClient), ISBN(_ISBN), date(_date) {}

const std::string& Borrow::getISBN() const {
    return ISBN;
}