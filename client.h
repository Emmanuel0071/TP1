#include <iostream>
#include <string>
#include <vector>


class Client {

    public:

        Client(std::vector <double> ISBNlist, std::string firstname, std::string lastname,std::string id);

    private:

        std::vector<double> _ISBNlist;
        std::string _firstname;
        std::string _lastname;
        std::string _id;

    


};