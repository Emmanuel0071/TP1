#include "author.h"
#include <iostream>
Author::Author(int id, const std::string& surname, const std::string& firstName, const Date& dateOfBirth)
    : _id(id), _surname(surname), _firstName(firstName), _dateOfBirth(dateOfBirth) {}

    int Author::getId() const { 
        return _id;
         }
    std::string Author::getSurname() const {
         return _surname; 
         }
    std::string Author::getFirstName() const { 
        return _firstName;
         }
    Date& Author::getDateOfBirth() {
         return _dateOfBirth; 
         }

     void Author::setId(int id){
          _id=id;
     }
     void Author::setSurname(const std::string& surname){
          _surname=surname;
     }
void Author::setFirstName(const std::string& firstName){
     _firstName=firstName;
}

std::ostream& operator<<(std::ostream& os, const Author& author) {
    os << "ID: " << author._id << "\n"
       << "Nom: " << author._surname << "\n"
       << "Prenom: " << author._firstName << "\n"
       << "Date de Naissance: " << author._dateOfBirth << "\n";
    return os;
}