#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    
    std::string extra;
    for (int i = 0; i < s.length(); i++){
        if (s[i] != s[i+1]) {
            extra += s[i];
        } else {
            continue;
        }
    }
    
    std::cout<<extra<<std::endl;
    
    return 0;
}