#ifndef AUTOR_H
#define AUTOR_H
#include <iostream>
#include <string>
#include "Date.h"

class Author {
private:
    int _id;
    std::string _surname;
    std::string _firstName;
    Date _dateOfBirth;

public:
    Author(int id, const std::string& surname, const std::string& firstName, const Date& dateOfBirth);

    
    int getId() const;
    std::string getSurname() const;
    std::string getFirstName() const;
    Date& getDateOfBirth();

    
    void setId(int id);
    void setSurname(const std::string& surname);
    void setFirstName(const std::string& firstName);

    friend std::ostream& operator<<(std::ostream& os, const Author& author);
};

#endif // AUTOR_H