#include <iostream>
#include <chrono>
#include <thread>

// Function to print a tile pattern
void printTilePattern() {
    // Tile pattern
    std::string tilePattern = "▼  ";

    // Infinite loop to print the tile pattern
    while (true) {
        std::cout << tilePattern;
        // Flush the output buffer to ensure immediate display
        std::cout.flush();
        // Introduce a delay to make the pattern stay visible
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}

int main() {
    // Call the function to print the tile pattern
    printTilePattern();

    return 0;
}

