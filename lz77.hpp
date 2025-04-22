#ifndef LZ77_HPP
#define LZ77_HPP
#include <string>

void lz77_compression(std::string& outputString, std::fstream& file); // LZ77 Compression function
std::string substringExists(const std::string& subString, char searchBuffer[], char lookAheadBuffer[]); // Helper function to find if substring exists in the search buffer
int substringPresesnt(const std::string& subString, char searchBuffer[]); // Helper function to find if substring is present in search buffer
std::string encodeSubString(const std::string& subString, char searchBuffer[], char lookAheadBuffer[], int offset, char nextChar); // Helper function to encode the substring

#endif