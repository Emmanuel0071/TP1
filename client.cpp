#include "client.h"

Client::Client(const std::vector<std::string>& ISBNList, std::string firstname, std::string lastname,std::string idClient)
    : _ISBNList(ISBNList), _firstname(firstname), _lastname(lastname), _idClient(idClient) {}

const std::string& Client::getIdClient() const{
    return _idClient;
}
const std::string& Client::getFirstname() const{
    return _firstname;
}
const std::vector<std::string>& Client::getISBNList() const {
    return _ISBNList;
}

void Client::setIdClient(std::string& newIdClient){
    _idClient = newIdClient;
}

void Client::setfirstname(std::string& newFirstname){
    _firstname=newFirstname;
}
void Client::setlastname(std::string& newLastname)
{
    _lastname=newLastname;
}
void Client::setISBNList(std::vector<std::string>& newISBNList){
    _ISBNList=newISBNList;
}