#ifndef AUTOR_H
#define AUTOR_H
#include <iostream>
#include <string>

class Author {
private:
    int _id;
    std::string _surname;
    std::string _firstName;
    std::string _dateOfBirth;

public:
    Author(int id, const std::string& surname, const std::string& firstName, const std::string& dateOfBirth);

    
    int getId() const;
    std::string getSurname() const;
    std::string getFirstName() const;
    std::string getDateOfBirth() const;

    
    void setId(int id);
    void setSurname(const std::string& surname);
    void setFirstName(const std::string& firstName);
    void setDateOfBirth(const std::string& dateOfBirth);
};

#endif // AUTOR_H²²