// Dictionary.h
#pragma once

#include <string>
#include <fstream>

using namespace std;

struct DictionaryNode
{
    string word;
    string meaning;
    DictionaryNode* left;
    DictionaryNode* right;

    DictionaryNode(const string& w, const string& m)
        : word(w), meaning(m), left(nullptr), right(nullptr) {}
};

class Dictionary
{
private:
    DictionaryNode* root;

    void destructor_help(DictionaryNode* temp);
    void ClearTree(DictionaryNode* node);
    void Insert(const string& word, const string& meaning);
    DictionaryNode* Insert(DictionaryNode* node, const string& word, const string& meaning);
    DictionaryNode* Search(DictionaryNode* node, const string& word);
    DictionaryNode* FindMin(DictionaryNode* node);
    DictionaryNode* Delete(DictionaryNode* node, const string& word);
    void WriteToFile(std::ofstream& outFile, DictionaryNode* node);

public:
    Dictionary();
    ~Dictionary();
    void LoadDictionary();
    void AddWord(const string& word, const string& meaning);
    void SearchWord(const string& word);
    void DeleteWord(const string& word);
    void UpdateWord(const string& word, const string& newMeaning);
    void WordSuggestion(const string& partialWord);
    void SuggestWords(DictionaryNode* node, const string& partialWord);
    void UpdateFile();
    void InOrderPrint();
    void InOrderPrint(DictionaryNode* node);
};
