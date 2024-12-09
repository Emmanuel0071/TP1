#include "Book.h"

Book::Book(const std::string& _title, const std::string& _autor, const std::string& _language, const std::string& _genre, const Date& _publicationDate, const std::string& _ISBN, const std::vector<std::string>& _idClients)
    : title(_title), autor(_autor), language(_language), genre(_genre), publicationDate(_publicationDate), ISBN(_ISBN), idClients(_idClients) {}