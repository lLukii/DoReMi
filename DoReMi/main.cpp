#include <bits/stdc++.h>
using namespace std;

vector<string> DRM{"Do","Re","Mi","Fa","Sol","La","Qi"};
int main(){
    string code;
    cout << "Enter the following code for conversion: ";
    getline(cin, code);
    for(char let: code){
        if(let < 'A' || let > 'G'){
            cout << "Error: invalid code detected";
            return 1;
        }
    }
    cout << "Enter the key of your music (Only white keys are supported as of v1.0)";
    char key;
    cin >> key;
    if(key > 'G' || key < 'A'){
        cout << "Error: invalid key deteced";
        return 1;
    }
    string newc;
    string keys = "CDEFGAB";
    for(char let: keys){
        newc += (let + (key-'C')-2)%7 + 'A';
    }
    cout << keys << endl;
    for(char let: code){
        for(int i = 0; i < keys.size(); i++){
            if(keys[i] == let){
                cout << DRM[i] << " ";
            }
        }
    }
    return 0;
} 
