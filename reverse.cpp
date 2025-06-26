#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::cin>>n;
    
    std::vector<int> numbers;
    for (int i = 0; i < n; i++) {
        int num = 0;
        std::cin>>num;
        numbers.push_back(num);
    }
    
    for (int i = n - 1; i >= 0; i--){
        std::cout<<numbers[i]<<std::endl;
    }
    
    
    return 0;
}