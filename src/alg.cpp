// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
 BST <std::string> tree;
    std::ifstream file(filename);
    if (!file) {
        std::cout << "File error!" << std::endl;
        return tree;
    }
    else
    {
        //std::string temp = "";
       // char ch;
        while (!file.eof()) {
            std::string temp = "";
           // std::string str;
           // while (std::getline(file, str)){
                while(true)
                {
                    char ch;
                    ch = file.get();
                    // file >> ch;
                    if (ch >= 'a' && ch <= 'z') {
                        temp += ch;
                    }
                    else if (ch >= 'A' && ch <= 'Z') {
                       ch= tolower(ch);
                        temp += ch;
                    }
                    else {
                       /* tree.add(temp);
                        temp = "";*/
                        break;

                    }
                }
                tree.add(temp);
        }
        return tree;
    }
}
