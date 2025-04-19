#ifndef COMPRESSOR_H
#define COMPRESSOR_H

// Includes
#include <iostream>
#include <fstream>
#include <string>

class Compressor
{
    private:
        const std::string filePath; // String to filepath
        std::fstream file;  // File that we will read from
        std::string outputString; // Output after compression
    public:
        Compressor(const std::string& path); // Constructor
        ~Compressor(); // Destructor
        
        void compress(); // Compression function that calls LZ77 and Huffman
        
};

#endif