#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    
    std::string end;
    for (int i = s.length() - 3; i < s.length(); i++){
        end += s[i];
    }
    std::cout<<end<<std::endl;
    
    //if last three characters in the string are "eh?" -> canadian
    if (end == "eh?") {
        std::cout<<"Canadian!\n";
    } else {
        std::cout<<"Imposter!\n";
    }
    
    return 0;
}