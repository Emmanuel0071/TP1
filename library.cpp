#include "library.h"

Library::Library() {}

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
        if (newClient.getId() != clients[i].getId()) {
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

void Library::borrowing(const Client& client, const Book& book) {

}
