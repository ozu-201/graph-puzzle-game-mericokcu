//
// Created by mo018152 on 12/14/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Array/Graph/Graph.h"
using std::string;
using std::cout;
using std::endl;
using std::cin;

bool differByOne(string& w1,string& w2) {
    int diffCount = 0;
    for (int i = 0; i < w1.length(); i++){
        if(w1[i] != w2[i]) {
            ++diffCount;
        }
    }
    return diffCount == 1;
}

int main() {
    cout << "Enter Starting Word:" << endl;
    string start;
    string target;
    getline(cin, start);
    cout << "Enter Target Word:" << endl;
    getline(cin, target);

    std::vector<std::string> threeLetter;
    std::vector<std::string> fourLetter;
    std::vector<std::string> fiveLetter;
    std::ifstream file("C:\\Users\\mo018152\\Desktop\\name.txt");
    if (file.is_open()) {
        std::string tmp;
        while (getline(file, tmp)) {
            if (tmp.length() == 3) {
                threeLetter.push_back(tmp);
            } else if (tmp.length() == 4) {
                fourLetter.push_back(tmp);
            } else if (tmp.length() == 5) {
                fiveLetter.push_back(tmp);
            }
        }
    }
    array::Graph graph3 = array::Graph(threeLetter.size());
    array::Graph graph4 = array::Graph(fourLetter.size());
    array::Graph graph5 = array::Graph(fiveLetter.size());

    for (int i = 0; i < threeLetter.size(); ++i) {
        for(int j = i + 1; j < threeLetter.size(); i++){
            if (differByOne(threeLetter[i], threeLetter[j]) == 1) {
                graph3.addEdge(i,j);
                graph3.addEdge(j,i);
            }
        }
    }
    for (int i = 0; i < fourLetter.size(); ++i) {
        for (int j = i + 1; j < fourLetter.size(); i++) {
            if (differByOne(fourLetter[i], fourLetter[j]) == 1) {
                graph3.addEdge(i, j);
                graph3.addEdge(j, i);
            }
        }
    }
    for (int i = 0; i < fiveLetter.size(); ++i) {
        for (int j = i + 1; j < fiveLetter.size(); i++) {
            if (differByOne(fiveLetter[i], fiveLetter[j]) == 1) {
                graph3.addEdge(i, j);
                graph3.addEdge(j, i);
            }
        }
    }
    //search function here:
    graph3.search(threeLetter,start,target);
   // graph5.search(fiveLetter,start,target);
    return 0;
}