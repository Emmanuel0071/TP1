#pragma once

#include <iostream>
#include <string>
#include "Date.h"


class Borrow {
private:
    std::string _idClient;
    std::string _ISBN;
    Date _date;

public:
    Borrow(const std::string& idClient, const std::string& ISBN, Date date);

    const std::string& getISBN() const;
    const Date& getDate() const;
    const std::string& getIdClient() const;


    void setISBN (const std::string& NewISBN);
    void setDate (const Date& NewDate);
    void setIdClient (const std::string& NewIdClient);
};