#include "Book.h"

Book::Book(const std::string& _ISBN, const std::string& _title, const std::string& _autor, const std::string& _language, const std::string& _genre, const Date& _publicationDate, const std::vector<std::string>& _idClients)
    : ISBN(_ISBN), title(_title), autor(_autor), language(_language), genre(_genre), publicationDate(_publicationDate), idClients(_idClients) {}

const std::string& Book::getISBN() const {
    return ISBN;
}
const std::string& Book::getTitle() const{
    return title;
}   
    const std::string& Book::getAutor() const{
        return autor;
    }
    const std::string& Book::getLanguage() const{
        return language;
    }
    const std::string& Book::getGenre() const{
        return  genre;
    }
    const Date& Book::getPublicationDate() const{
        return  publicationDate;
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
    void Book::setAutor(const std::string& NewAutor){
        autor = NewAutor;
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