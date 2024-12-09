#pragma once

#include "Date.h"
#include <string>
#include <vector>

class Book {
private:
    std::string ISBN;
    std::string title;
    std::string autor;
    std::string language;
    std::string genre;
    Date publicationDate;
    std::vector<std::string> idClients;

public:
    Book(const std::string& _ISBN, const std::string& _title, const std::string& _autor, const std::string& _language, const std::string& _genre,
    const Date& _publicationDate, const std::vector<std::string>& _idClients);

    const std::string& getISBN() const;

};
