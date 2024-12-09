#pragma once

#include "Book.h"
#include "client.h"
#include "borrow.h"

class Library {
private:
    std::vector<Client> clients;
    std::vector<Book> books;
    std::vector<Borrow> borrows;

    Date actualDate;

public:
    Library(const Date& date);

    const std::vector<Client>& getClients() const;
    const std::vector<Book>& getBooks() const;
    const std::vector<Borrow>& getBorrows() const;

    void addClient(const Client& newClient);
    void addBook(const Book& newBook);
    void addBorrow(const Borrow& newBorrow);

    void borrowingBook(const Client& client, const Book& book);
    void returningBook(const Client& client, const Book& book);


};