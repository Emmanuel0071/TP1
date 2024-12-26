#include "Book.h"

Book::Book(const std::string& _ISBN, const std::string& _title, const std::string& _language, const std::string& _genre, const Date& _publicationDate, const std::vector<std::string>& _idClients, int _id, const std::string& _surname, const std::string& _firstName, const Date& _dateOfBirth)
    : Author(_id, _surname, _firstName, _dateOfBirth), ISBN(_ISBN), title(_title), language(_language), genre(_genre), publicationDate(_publicationDate), idClients(_idClients) {}

const std::string& Book::getISBN() const {
    return ISBN;
}
const std::string& Book::getTitle() const{
    return title;
}   
const std::string& Book::getLanguage() const{
    return language;
}
const std::string& Book::getGenre() const{
    return genre;
}
const Date& Book::getPublicationDate() const{
    return publicationDate;
}
const std::vector<std::string>& Book::getIdClients() const{
    return idClients;
}
void Book::setISBN(const std::string& NewISBN){
    ISBN = NewISBN;
}
void Book::setTitle(const std::string& NewTitle){
    title = NewTitle;
}
void Book::setLanguage(const std::string& NewLanguage){
    language = NewLanguage;
}
void Book::setGenre(const std::string& NewGenre){
    genre = NewGenre;
}
void Book::setPublicationDate(const Date& NewPublicationDate){
    publicationDate = NewPublicationDate;
}

std::ostream& operator<<(std::ostream& os, Book& book) {
    os << book.ISBN << "\n" <<
    book.title << "\n" <<
    book.language << "\n" <<
    book.genre << "\n" <<
    book.publicationDate;
    for (int i = 0; i < book.idClients.size(); i++) {
        os << book.idClients[i] << "\n";
    }
    return os;
}
