#include "author.h"
#include <iostream>
Author::Author(int id, const std::string& surname, const std::string& firstName, const std::string& dateOfBirth)
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
    std::string Author::getDateOfBirth() const {
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
     void Author::setDateOfBirth(const std::string& dateOfBirth){
          _dateOfBirth=dateOfBirth;
     }
 
