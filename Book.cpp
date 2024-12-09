#include "Book.h"

Book::Book(const std::string& _ISBN, const std::string& _title, const std::string& _autor, const std::string& _language, const std::string& _genre, const Date& _publicationDate, const std::vector<std::string>& _idClients)
    : ISBN(_ISBN), title(_title), autor(_autor), language(_language), genre(_genre), publicationDate(_publicationDate), idClients(_idClients) {}

const std::string& Book::getISBN() const {
    return ISBN;
}
