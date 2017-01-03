#include<iostream>
#include"Document.h"

Document::Document(const char* name)
{
    std::cout << "Document::Document(const char*)\n";
}

void Document::open()
{
    std::cout << "Document::open()\n";
}

void Document::paste()
{
    std::cout << "Document::paste()\n";
}
