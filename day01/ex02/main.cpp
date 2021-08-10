#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "value string "<< string << std::endl;
    std::cout << "value stringPTR " << *stringPTR << std::endl;
    std::cout << "value stringREF " << stringREF << std::endl;

    std::cout << "address string " << &string << std::endl;
    std::cout << "address stringPTR " << stringPTR << std::endl;
    std::cout << "address stringREF " << &stringREF << std::endl;

	return 0;
}