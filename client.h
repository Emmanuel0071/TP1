#pragma once

#include <iostream>
#include <string>
#include <vector>


class Client {

    public:

        Client(const std::vector<std::string>& _ISBNList, std::string _firstname, std::string _lastname,std::string _idClient);

        const std::string getId() const;

    private:

        std::vector<std::string> ISBNList;
        std::string firstname;
        std::string lastname;
        std::string idClient;

    


};