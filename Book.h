#pragma once

#include "Date.h"
#include "author.h"
#include <string>
#include <vector>
#include <iostream>

class Book : public Author {
private:
    std::string ISBN;
    std::string title;
    std::string language;
    std::string genre;
    Date publicationDate;
    std::vector<std::string> idClients;

public:
    Book(const std::string& _ISBN, const std::string& _title, const std::string& _language, const std::string& _genre,
    const Date& _publicationDate, const std::vector<std::string>& _idClients, int _id, const std::string& _surname, const std::string& _firstName, const Date& _dateOfBirth);

    const std::string& getISBN() const;
    const std::string& getTitle() const;   
    const std::string& getLanguage() const;
    const std::string& getGenre() const;
    const Date& getPublicationDate() const;
    const std::vector<std::string>& getIdClients() const;

    void setISBN(const std::string& NewISBN); 
    void setTitle(const std::string& NewTitle);
    void setLanguage(const std::string& NewLanguage);
    void setGenre(const std::string& NewGenre);
    void setPublicationDate(const Date& NewPublicationDate);

    friend std::ostream& operator<<(std::ostream& os, Book& book);
};
