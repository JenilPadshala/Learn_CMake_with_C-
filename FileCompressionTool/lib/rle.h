#ifndef RLE_H
#define RLE_H

#include <string>

std::string rle_compress(const std::string& input_data);
std::string rle_decompress(const std::string& compressed_data);

#endif
