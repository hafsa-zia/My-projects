#pragma once
#include <fstream>
#include <string>
#include "DicNode.h"
#include<Windows.h>

using namespace std;

class Dictionary
{
private:
    DictionaryNode* root;

public:
    Dictionary() : root(NULL) {}
    DictionaryNode* copyNodes(const DictionaryNode* otherRoot) const
    {
        if (otherRoot == nullptr)
            return nullptr;

        // Recursively copy nodes
        DictionaryNode* newNode = new DictionaryNode(otherRoot->word, otherRoot->meaning);
        newNode->left = copyNodes(otherRoot->left);
        newNode->right = copyNodes(otherRoot->right);

        return newNode;
    }
    Dictionary& operator=(const Dictionary& other)
    {
        if (this != &other) // self-assignment check
        {
            DictionaryNode* newRoot = copyNodes(other.root);
            root = newRoot;
        }
        return *this;
    }
    void destructor_help(DictionaryNode* temp)
    {
        if (root == NULL)
        {
            return;
        }
        destructor_help(temp->left);
        destructor_help(temp->right);
        delete root;
    }
    void destructor()
    {
        destructor_help(root);

    }
    void LoadDictionary()
    {
        ifstream file("Dic.txt");
        if (!file.is_open())
        {

            ////cout << "Error: Unable to open file Dictionary.txt" << endl;
            return;
        }

        ClearTree(root);

        string word, meaning;
        while (file >> word >> meaning)
        {
            Insert(word, meaning);
        }

        file.close();
        //cout << "Dictionary loaded successfully." << endl;
    }

    bool AddWord(const string& word, const string& meaning)
    {

        if (Search(root, word))
        {
            return false;
        }
        else
        {
            Insert(word, meaning);
            UpdateFile();
            return true;
        }
    }

    bool SearchWord(const string& word)
    {

        DictionaryNode* result = Search(root, word);
        if (result)
        {
            return true;
            //cout << "Meaning: " << result->meaning << endl;
        }
        else
        {
            return false;
            //cout << "Word not found in the dictionary." << endl;
        }
    }

    bool DeleteWord(const string& word)
    {
        if (Search(root, word))
        {
            // Assuming you have a confirmation dialog before deletion
            // string response;
            // cin >> response;
            // if (response == "Yes" || response == "yes")
            // {
            root = Delete(root, word);
            UpdateFile();
            LoadDictionary(); // Reload the dictionary after deletion
            return true;
            // }
        }
        else
        {
            return false;
            //cout << "Word not found in the dictionary." << endl;
        }
    }


    bool UpdateWord(const string& word, const string& newMeaning)
    {
        DictionaryNode* result = Search(root, word);
        if (result)
        {
            // Word found, update the meaning
            result->meaning = newMeaning;
            UpdateFile();
            cout << "Word updated successfully." << endl;  // Add this line for debugging
            return true; // Return true to indicate success
        }
        else
        {
            // Word not found in the dictionary, return false to indicate failure
            cout << "Error: Word not found." << endl;  // Add this line for debugging
            return false;
        }
    }

    void WordSuggestion(const string& partialWord)
    {

        //cout << "Suggested words for \"" << partialWord << "\": ";
        SuggestWords(root, partialWord);
        //cout << endl;
    }

    void SuggestWords(DictionaryNode* node, const string& partialWord)
    {
        if (node)
        {
            if (node->word.find(partialWord) == 0)
            {
                //cout << endl;
                //cout << node->word;
            }
            SuggestWords(node->left, partialWord);
            SuggestWords(node->right, partialWord);
        }
    }

    void ClearTree(DictionaryNode* node)
    {
        if (node)
        {
            ClearTree(node->left);
            ClearTree(node->right);
            delete node;
        }
        root = NULL;
    }
    string meaning(const string& word)
    {

        DictionaryNode* result = Search(root, word);
        if (result)
        {
            return result->meaning;
            //cout << "Meaning: " << result->meaning << endl;
        }
       
    }
    void Insert(const string& word, const string& meaning)
    {
        root = Insert(root, word, meaning);
    }

    DictionaryNode* Insert(DictionaryNode* node, const string& word, const string& meaning)
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

    DictionaryNode* Search(DictionaryNode* node, const string& word)
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

    DictionaryNode* FindMin(DictionaryNode* node)
    {
        while (node->left != NULL)
        {
            node = node->left;
        }
        return node;
    }

    DictionaryNode* Delete(DictionaryNode* node, const string& word)
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

    void UpdateFile()
    {

        ofstream outFile("Dic.txt");
        if (!outFile.is_open())
        {
            //cout << "Error: Unable to open file Dictionary.txt for writing" << endl;
            return;
        }

        WriteToFile(outFile, root);

        outFile.close();
    }

    void WriteToFile(ofstream& outFile, DictionaryNode* node)
    {
        if (node)
        {
            WriteToFile(outFile, node->left);
            outFile << node->word << " " << node->meaning << endl;
            WriteToFile(outFile, node->right);
        }
    }






    void InOrderPrint()
    {

        //cout << "In-Order Print of Dictionary:" << endl;
        InOrderPrint(root);
        //cout << endl;
    }

    void InOrderPrint(DictionaryNode* node)
    {
        if (node)
        {
            InOrderPrint(node->left);
            //cout << node->word << ": " << node->meaning << endl;
            InOrderPrint(node->right);
        }
    }

    DictionaryNode* getRoot() {
        return root;
    }

};
