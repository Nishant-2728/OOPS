#include<bits/stdc++.h>
using namespace std;
class Hero{  //defining a class
public:
    int health;
    int level;
};
int main(){
    Hero Ramesh; //creation of object
    cout<<sizeof(Ramesh)<<endl;
    Ramesh.health=70;
    Ramesh.level=4;
    cout<<Ramesh.health<<endl;
    cout<<Ramesh.level<<endl;
}