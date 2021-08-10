#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cout << "Error, usage: replace FILENAME str1 str2" << std::endl;
        return 1;
    }
    std::string file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (file.empty() || s1.empty() || s2.empty()) {
        std::cout << "Error, arguments is empty" << std::endl;
        return 1;
    }
    std::string f;
    std::string fileStr;
    std::fstream fileStream;
    fileStream.open(file);
    fileStr = fileStream.str();
    std::cout << fileStr << std::endl;
}
