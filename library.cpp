#include "library.h"

Library::Library(const Date& date) : actualDate(1, 1, 2000) {}

const std::vector<Client>& Library::getClients() const {
    return clients;
}
const std::vector<Book>& Library::getBooks() const {
    return books;
}
const std::vector<Borrow>& Library::getBorrows() const {
    return borrows;
}

void Library::addClient(const Client& newClient) {
    for (int i = 0; i < clients.size(); i++) {
        if (newClient.getIdClient() != clients[i].getIdClient()) {
           clients.emplace_back(newClient);
        }
    }
}
void Library::addBook(const Book& newBook) {
    for (int i = 0; i < books.size(); i++) {
        if (newBook.getISBN() != books[i].getISBN()) {
            books.emplace_back(newBook);
        }
    }
}

void Library::addBorrow(const Borrow& newBorrow) {

}

void Library::borrowingBook(const Client& client, const Book& book) {
    for (int i = 0; i < borrows.size(); i++) {
        if (book.getISBN() != borrows[i].getISBN()) {
            Borrow newBorrow(client.getIdClient(), book.getISBN(), actualDate);
            borrows.emplace_back(newBorrow);
        }
    }
}

void Library::returningBook(const Client& client, const Book& book) {

}
