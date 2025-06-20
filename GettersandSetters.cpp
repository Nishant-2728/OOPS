#include<bits/stdc++.h>
using namespace std;
class Hero{
private:
    int health;
    int level;
public:
    void assignhealth(int x){
        health=x;
    }
    void assignlevel(int x){
        level=x;
    }
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
};
int main(){
    Hero h1;
    h1.assignhealth(70);
    h1.assignlevel(6);
    cout<<h1.gethealth()<<" "<<h1.getlevel()<<endl;
    cout<<sizeof(h1)<<endl;
}