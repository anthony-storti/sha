#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main( int argc , char *argv[]){
    //declare variables
    unordered_map<string, string> umap;
    string temp;
    string hash = argv[1];
    string dictionary = argv[2];
    string line;
    
    // validate user input by size of hash if valid continue wih program if not skip all the code and output invalid input
    
    if((stoi(dictionary) == 1 && hash.size() == 40) || (stoi(dictionary) == 224 && hash.size() == 56) || (stoi(dictionary) == 256 && hash.size() == 64)){
    
    // prepare user input in case they included uppercase characters
    
        for (char &c : temp){
            hash += tolower(c);
        }

    // read in file bases on user input to unordered map. set hash as key and known password as value

        ifstream inFile("sha" + dictionary +  "_list.txt");
        while (getline(inFile, line)){
            umap.insert(make_pair(line.substr(line.find(':') + 1,line.length()),line.substr(0, line.find(':'))));
        }

    // make iterator to look for hash in unordered map if found display value or display not found if iterator reaches the end 
    // of the map

        unordered_map<string,string>::const_iterator it = umap.find (hash);
        if ( it == umap.end() )
            cout << "not found";
        else
            cout << it->first << " is a known password and hashes to: " << it->second;
        }
    else 
        cout << "Invalid Input";

    return 0;
}
