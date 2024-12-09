#include <iostream>
#include <string>

class Client {

    public:{

        Client(std::vector<double> ISBN, std::string name, std::string nickname,std::string id);

    }

    private:{

        std::vector<double> _ISBN;
        std::string _name;
        std::string _nickname;
        std::string _id;

    }


};