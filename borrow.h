#pragma once

#include <iostream>
#include <string>
#include "Date.h"


class Borrow {
private:
    std::string idClient;
    std::string ISBN;
    Date date;

public:
    Borrow(const std::string& _idClient, const std::string& _ISBN, Date _date);

    const std::string& getISBN() const;

};