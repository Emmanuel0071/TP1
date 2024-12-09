#include "client.h"

Client::Client(std::vector<double> _ISBNlist, std::string _firstname, std::string _lastname,std::string _idClient)
    : ISBNList(_ISBNList), firstname(_firstname), lastname(_lastname), idClient(_idClient) {}

const std::string Client::getId() const {
    return idClient;
}
