#include "client.h"

Client::Client(const std::vector<std::string>& _ISBNList, std::string _firstname, std::string _lastname,std::string _idClient)
    : ISBNList(_ISBNList), firstname(_firstname), lastname(_lastname), idClient(_idClient) {}

const std::string Client::getId() const {
    return idClient;
}
