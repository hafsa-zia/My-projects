// Dictionary.cpp
#include "Dictionary.h"
#include <iostream>

Dictionary::Dictionary() :root(NULL) {}
void Dictionary::destructor_help(DictionaryNode* temp)
{
    if (root == NULL)
    {
        return;
    }
    destructor_help(temp->left);
    destructor_help(temp->right);
    delete root;
}

Dictionary::~Dictionary()
{
    destructor_help(root);
}

void  Dictionary::LoadDictionary()
{
    ifstream file("Dic.txt");
    if (!file.is_open())
    {
        cout << "Error: Unable to open file Dictionary.txt" << endl;
        return;
    }

    ClearTree(root);

    string word, meaning;
    while (file >> word >> meaning)
    {
        Insert(word, meaning);
    }

    file.close();
    cout << "Dictionary loaded successfully." << endl;
}
void Dictionary::AddWord(const string& word, const string& meaning)
{
    if (Search(root, word))
    {
        cout << "Word already exists in the dictionary." << endl;
    }
    else
    {
        Insert(word, meaning);
        UpdateFile();
        cout << "Word added successfully." << endl;
    }
}
void  Dictionary::SearchWord(const string& word)
{
    DictionaryNode* result = Search(root, word);
    if (result)
    {
        cout << "Meaning: " << result->meaning << endl;
    }
    else
    {
        cout << "Word not found in the dictionary." << endl;
    }
}
void    Dictionary::DeleteWord(const string& word)
{
    if (Search(root, word))
    {
        cout << "Do you want to delete the word? (Yes/No): ";
        string response;
        cin >> response;
        if (response == "Yes" || response == "yes")
        {
            root = Delete(root, word);
            UpdateFile();
            cout << "Word deleted successfully." << endl;
        }
    }
    else
    {
        cout << "Word not found in the dictionary." << endl;
    }
}
void  Dictionary::UpdateWord(const string& word, const string& newMeaning)
{
    DictionaryNode* result = Search(root, word);
    if (result)
    {
        cout << "Do you want to update the word? (Yes/No): ";
        string response;
        cin >> response;
        if (response == "Yes" || response == "yes")
        {
            result->meaning = newMeaning;
            UpdateFile();
            cout << "Word updated successfully." << endl;
        }
    }
    else
    {
        cout << "Word not found in the dictionary." << endl;
    }
}
void Dictionary::WordSuggestion(const string& partialWord)
{

    cout << "Suggested words for \"" << partialWord << "\": ";
    SuggestWords(root, partialWord);
    cout << endl;
}
void  Dictionary::SuggestWords(DictionaryNode* node, const string& partialWord)
{
    if (node)
    {
        if (node->word.find(partialWord) == 0)
        {
            cout << endl;
            cout << node->word;
        }
        SuggestWords(node->left, partialWord);
        SuggestWords(node->right, partialWord);
    }
}
void  Dictionary::ClearTree(DictionaryNode* node)
{
    if (node)
    {
        ClearTree(node->left);
        ClearTree(node->right);
        delete node;
    }
    root = NULL;
}
void    Dictionary::Insert(const string& word, const string& meaning)
{
    root = Insert(root, word, meaning);
}
DictionaryNode* Dictionary::Insert(DictionaryNode* node, const string& word, const string& meaning)
{
    if (node == NULL)
    {
        return new DictionaryNode(word, meaning);
    }

    if (word < node->word)
    {
        node->left = Insert(node->left, word, meaning);
    }
    else if (word > node->word)
    {
        node->right = Insert(node->right, word, meaning);
    }

    return node;
}

DictionaryNode* Dictionary::Search(DictionaryNode* node, const string& word)
{
    if (node == NULL || node->word == word)
    {
        return node;
    }

    if (word < node->word)
    {
        return Search(node->left, word);
    }
    else {
        return Search(node->right, word);
    }
}
DictionaryNode* Dictionary::FindMin(DictionaryNode* node)
{
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}
DictionaryNode* Dictionary::Delete(DictionaryNode* node, const string& word)
{
    if (node == NULL)
    {
        return node;
    }

    if (word < node->word)
    {
        node->left = Delete(node->left, word);
    }
    else if (word > node->word)
    {
        node->right = Delete(node->right, word);
    }
    else
    {
        if (node->left == NULL)
        {
            DictionaryNode* temp = node->right;
            delete node;
            return temp;
        }
        else if (node->right == NULL)
        {
            DictionaryNode* temp = node->left;
            delete node;
            return temp;
        }

        // Node with two children
        DictionaryNode* temp = FindMin(node->right);
        node->word = temp->word;
        node->meaning = temp->meaning;
        node->right = Delete(node->right, temp->word);
    }

    return node;
}
void   Dictionary::UpdateFile()
{
    ofstream outFile("Dic.txt");
    if (!outFile.is_open())
    {
        cout << "Error: Unable to open file Dictionary.txt for writing" << endl;
        return;
    }

    WriteToFile(outFile, root);

    outFile.close();
}
void Dictionary::WriteToFile(ofstream& outFile, DictionaryNode* node)
{
    if (node)
    {
        WriteToFile(outFile, node->left);
        outFile << node->word << " " << node->meaning << endl;
        WriteToFile(outFile, node->right);
    }
}

void Dictionary::InOrderPrint()
{
    cout << "In-Order Print of Dictionary:" << endl;
    InOrderPrint(root);
    cout << endl;
}
void Dictionary::InOrderPrint(DictionaryNode* node)
{
    if (node)
    {
        InOrderPrint(node->left);
        cout << node->word << ": " << node->meaning << endl;
        InOrderPrint(node->right);
    }
}
