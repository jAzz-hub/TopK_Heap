
#ifndef STRUCTURESANDSIGNATURES_HPP
#define STRUCTURESANDSIGNATURES_HPP

#include <iostream>
#include <filesystem>
#include <bits/stdc++.h>

#define K 20

using namespace std;


class Heap
{
    public:
    //Atributes:

    string score_ranking[K];
    int size = K;
    vector<pair<int, string>> data;
    int heavy_trades;



    //Constructors:
    Heap();
    Heap(int size, vector<pair<int, string>> data);

    // Methods:
    void show();
    void show_sorted();
    void swap(int first, int second);
    void organize(int actually_parent);
    void fill_the_Heap(vector<pair<int, string>> words, unordered_map<string, int> hash);
    void pile_the_Heap();
    void bigger_value_researcher(vector<pair<int, string>> words, unordered_map<string, int> &hash);
    void InsertionSort();

};


//Functions Signatures:
string lower_case(string target);

unordered_map<string, int> readStopWordsFile();

bool isStopChar(char something);

bool isStopWord(string word,unordered_map<string, int> stop_words);

void tryHashIt(string word, unordered_map<string, int> &Hash, vector<pair<int, string>> &words);

unordered_map<string, int> fileReader(vector<pair<int, string>> &words, string path);

void everythingForEachInput(string path_to_input);

#endif

