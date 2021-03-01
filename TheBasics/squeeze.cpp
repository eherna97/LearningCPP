// This project will demonstrate how certain variables can squeeze into other types

#include <iostream>

int main() {
    double d = 0;
    while (std::cin >> d) {
        int i = d;			//squeeze double into int
        char c = i; 		// squeeze int into char
        int i2 = c; 		// fetch int value of char
        std::cout << "d==" << d 				// original double value
        		  << "  i==" << i 				// converted to int
        		  << "  i2==" << i2 			// int value of char
        		  << "  char(" << c << ")\n";   // the char
    }
}