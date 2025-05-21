#include <iostream>
#include <string>
#include "rle.h"

int main() {
    std::cout << "--- File Compression Tool (RLE) ---" << std::endl;

    // --- Example Usage with a hardcoded string ---
    std::string original_data = "AAAAABBBCCCDDDDDDEEEFFFFFG";
    std::cout << "Original data:   " << original_data << std::endl;

    std::string compressed_data = rle_compress(original_data);
    std::cout << "Compressed data: " << compressed_data << std::endl;

    std::string decompressed_data = rle_decompress(compressed_data);
    std::cout << "Decompressed data: " << decompressed_data << std::endl;

    std::cout << "-----------------------------------" << std::endl;

    if (original_data == decompressed_data) {
        std::cout << "SUCCESS: Original and decompressed data match." << std::endl;
    } else {
        std::cout << "ERROR: Original and decompressed data DO NOT match!" << std::endl;
    }
    std::cout << "-----------------------------------" << std::endl;
}