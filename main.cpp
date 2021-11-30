/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Gershman
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Name_value {
    public:
        string name;
        int value;
};

bool ContainsName(vector<Name_value> vector, string name) {
    for (Name_value name_value : vector) {
        if (name_value.name == name)
            return true;
    }
    
    return false;
}

void PrintVector(vector<Name_value> vector) {
    for (Name_value name_value : vector) {
        cout << "(" << name_value.name << ", " << name_value.value << ")\n";
    }
}

int main()
{
    Name_value curName_value;
    vector<Name_value> names;
    
    while (1) {
        cout << "Enter a name and a value: ";
        cin >> curName_value.name >> curName_value.value;

        if (curName_value.name == "NoName" && curName_value.value == 0) {
            break;
        }
        else {
            if (ContainsName(names, curName_value.name)) {
                cout << "Entered name already exists.";
                break;
            }
            else {
                names.push_back(curName_value);
            }
        }
        cout << "\n";
    }
    
    cout << "\n\nFinal List: \n";
    PrintVector(names);
    
    return 0;
}
