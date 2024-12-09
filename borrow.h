#pragma once

#include <iostream>
#include <string>
#include "Date.h"


class Borrow {
    public:
        Borrow(Date date,double ISBN,std::string idlecteur);
    private:
        Date _date;
        double _ISBN;
        std::string _idlecteur;
};