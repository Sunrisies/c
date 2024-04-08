#include <iostream>  
#include <fstream>  
#include <string>  
extern "C" {  
int file() {  
    std::ifstream file("C:\\Users\\hover\\Desktop\\test\\c\\main.c");  
  
    if (!file.is_open()) {  
        std::cerr << "Error opening file\n";  
        return 1;  
    }  
  
    char ch;  
    while (file.get(ch)) {  
        std::cout << ch;  
    }  
  
    file.close();  
  
    return 0;  
}
}
