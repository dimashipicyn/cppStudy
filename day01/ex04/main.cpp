#include <iostream>
#include <sstream>
#include <fstream>

std::string readFile(std::string &filename)
{
    std::stringstream ss;
    std::ifstream fileStream;

    fileStream.open(filename);
    if (fileStream.is_open()) {
        ss << fileStream.rdbuf();
        return ss.str();
    }
    std::cout << "File: " << filename << " is not open!" << std::endl;
    std::exit(1);
}

void    replaceStr(std::string & str, std::string & search, std::string & replace)
{
    size_t pos = 0;

    pos = str.find(search, pos);
    while (pos != std::string::npos) {
        str.erase(pos, search.length());
        str.insert(pos, replace);
        pos += replace.length();
        pos = str.find(search, pos);
    }
}

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cout << "Error, usage: replace FILENAME str1 str2" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (filename.empty() || s1.empty() || s2.empty()) {
        std::cout << "Error, arguments is empty" << std::endl;
        return 1;
    }
    std::string filestr = readFile(filename);
    replaceStr(filestr, s1, s2);
    filename.append(".replace");
    std::ofstream filereplace(filename);
    if (filereplace.is_open()) {
        filereplace.clear();
        filereplace << filestr;
    }
    else {
        std::cout << "File: " << filename << " is not open!" << std::endl;
    }
}
