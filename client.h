#pragma once

#include <iostream>
#include <string>
#include <vector>


class Client {

    public:

        Client(std::vector<double> _ISBNList, std::string _firstname, std::string _lastname,std::string _idClient);

        const std::string getId() const;

    private:

        std::vector<double> ISBNList;
        std::string firstname;
        std::string lastname;
        std::string idClient;

    


};