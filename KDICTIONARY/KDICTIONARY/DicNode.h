#pragma once
#include <iostream>
#include <string>


using namespace std;

struct DictionaryNode
{
    string word;
    string meaning;
    DictionaryNode* left;
    DictionaryNode* right;


    DictionaryNode(const string& w, const string& m)
        : word(w), meaning(m), left(NULL), right(NULL) {}

    DictionaryNode& operator=(const DictionaryNode& other)
    {
        if (this != &other)
        {
            word = other.word;
            meaning = other.meaning;
            left = other.left;
            right = other.right;
        }
        return *this;
    }
};