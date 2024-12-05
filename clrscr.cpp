#include<iostream>
#include<fstream>
int main()
{
    char s;
    std::ifstream file("New.txt");
    if (!file)
    {
        std::cerr << "Error " << std::endl;
        return 1;
    }
    while(file.get(s))
    {
        std::cout << s;
    }
    file.close();
    return 0;
}