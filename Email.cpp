#include <iostream>
#include <string>

struct Email {
    std::string address;

    bool isValid() {
        size_t atPosition = address.find('@');
        if (atPosition == std::string::npos) {
            return false; 
        }

        
        size_t dotPosition = address.find('.', atPosition);
        if (dotPosition == std::string::npos) {
            return false; 
        }

        
        if (atPosition == 0 || dotPosition == address.length() - 1) {
            return false;
        }

        return true;
    }
};

int main() {
    Email email;

    std::cout << "please Enter your Email address: ";
    std::cin >> email.address;

    if (email.isValid()) {
        std::cout << "valid Email." << std::endl;
    }
    else {
        std::cout << "unvalid Email." << std::endl;
    }

    return 0;
}
