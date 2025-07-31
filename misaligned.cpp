#include <iostream>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap();
    assert(result == 25);
    assert(output.find("White | Blue") std::string::npos); 
    assert(output.find("Violet | Slate") std::string::npos); 
    assert(output.find("Red | Orange") std::string::npos); 
    assert(output.find("Yellow | Brown") std::string::npos); 
    std::cout << "All is well (maybe!)\n";
}
