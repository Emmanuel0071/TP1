#pragma once

#include <iostream>
#include <string>
#include <vector>


class Client {

    public:

        Client(const std::vector<std::string>& ISBNList, std::string firstname, std::string lastname,std::string idClient);

        const std::string& getIdClient() const;
        const std::string& getFirstname() const;
        const std::string& getLastname() const;
        const std::vector<std::string>& getISBNList() const;

        void setIdClient(std::string& newIdClient);
        void setfirstname(std::string& newFirstname);
        void setlastname(std::string& newLastname);
        void setISBNList(std::vector<std::string>& newISBNList);

    private:

        std::vector<std::string> _ISBNList;
        std::string _firstname;
        std::string _lastname;
        std::string _idClient;

};