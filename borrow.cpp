#include "borrow.h"
#include "Date.h"

Borrow::Borrow(const std::string& idClient, const std::string& ISBN, Date date)
    : _idClient(idClient), _ISBN(ISBN), _date(date) {}

const std::string& Borrow::getISBN() const {
    return _ISBN;
}
const Date& Borrow::getDate() const {
    return _date;
}
const std::string& Borrow::getIdClient() const {
    return _idClient;
}   

void Borrow::setISBN(const std::string& newISBN){
    _ISBN = newISBN;

}

void Borrow::setIdClient(const std::string& newIdClient){
    _idClient = newIdClient;
}
void Borrow::setDate(const Date& newDate){
    _date=newDate;
}