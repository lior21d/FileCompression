#include "compressor.hpp"

int main()
{
    std::string filepath = "testfile.txt";
    Compressor c(filepath);
    c.compress();
    
}