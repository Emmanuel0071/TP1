#pragma once

#include "Book.h"
#include "client.h"
#include "borrow.h"

class Library {
private:
    std::vector<Client> clients;
    std::vector<Book> books;
    std::vector<Borrow> borrows;

public:
    Library();

    const std::vector<Client>& getClients() const;
    const std::vector<Book>& getBooks() const;
    const std::vector<Borrow>& getBorrows() const;

    void addClient(const Client& client);
    void addBook(const Book& book);
    void addBorrow(const Borrow& book);

    void borrowing(const Client& client, const Book& book);

};