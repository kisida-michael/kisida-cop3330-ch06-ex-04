#include "header.h"

class Name_Value
{
public:
    string name;
    int score;
};

int main(){
    vector<Name_Value> grouping;
    string name;
    int score;
   
   cout << "Enter a name and score: " ;
  while ((cin >> name >> score) && (name != "NoName" || score != 0)){

    for(Name_Value input : grouping){
    
        if(input.name == name){
            cout << "Duplicate Name" << endl;
            exit(0);
        }
    }
    grouping.push_back(Name_Value{name,score});
    }
    
    for(int i = 0; i < grouping.size(); i++){
        cout << "(" << grouping[i].name << "," << grouping[i].score << ")" <<endl;
    }
    return 0;
}

