#include <iostream>
#include <string>
#include <vector>


class Client {

    public:

        Client(std::vector <double> ISBNlist, std::string name, std::string nickname,std::string id);

    private:

        std::vector<double> _ISBNlist;
        std::string _name;
        std::string _nickname;
        std::string _id;

    


};