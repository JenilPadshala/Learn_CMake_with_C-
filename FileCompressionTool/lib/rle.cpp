#include "rle.h"
#include <iostream>

std::string rle_compress(const std::string& input_data) {
    if (input_data.empty()) {
        return "";
    }

    std::string compressed_output;
    char current_char = input_data[0];
    int count = 1;

    for (size_t i = 1; i < input_data.length(); ++i) {
        if (input_data[i] == current_char) {
            count ++;
        }
        else {
            compressed_output += std::to_string(count);
            compressed_output += current_char;
            current_char = input_data[i];
            count = 1;
        }
    }
    compressed_output += std::to_string(count);
    compressed_output += current_char;

    std::cout << "RLE_Lib: rle_compress called. Input size: " << input_data.length()
              << ", Output size: " << compressed_output.length() << std::endl;
    return compressed_output;
}

std::string rle_decompress(const std::string& compressed_data) {
    if (compressed_data.empty()){
        return "";
    }

    std::string decompressed_output;
    std::string count_str;

    for (char ch : compressed_data){
        if(isdigit(ch)){
            count_str += ch;
        }
        else{
            if (!count_str.empty()){
                int count = std::stoi(count_str);
                for(int i=0; i<count; i++){
                    decompressed_output += ch;
                }
                count_str.clear();
            }
        }
    }
    std::cout << "RLE_Lib: rle_decompress called. Input size: " << compressed_data.length()
              << ", Output size: " << decompressed_output.length() << std::endl;
    return decompressed_output;
}