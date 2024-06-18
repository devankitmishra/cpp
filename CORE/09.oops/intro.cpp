#include <iostream>
using namespace std;

class Hero
{
    
    public:
    int health;
    char level;

    // Default Constructor
    Hero(){
        cout<<"Constructor Called"<<endl; 
    }

    //Parameterised Constructor
    Hero(int health){ 
        cout<<"this->"<<this<<endl;
        this->health = health;
    }

    Hero(int health,char level){ 
        this-> level = level;
        this->health = health;
    }

    void print(){
        cout<<level<<endl;
    }

    // int getHealth() { return health; }
    // int getLevel() { return level; }
    // int setHealth(int h) {health = h;}
    // int setLevel(int l) { level = l; }
};

int main()
{   
    // //Static allocate 
    // Hero ankit;
    // // ankit.health = 100;
    // // ankit.level = '@';
    // ankit.setHealth(100);
    // ankit.setLevel('@');

    // cout << "Health is " << ankit.health << endl;
    // cout << "Level is " << ankit.level << endl;

    // //Dynamic allocation 
    // Hero *bunny = new Hero;
    // bunny->setHealth(70);
    // bunny->setLevel('!');

    // cout<<"Health is " << (*bunny).health << endl;
    // cout<<"Level is " << (*bunny).level << endl;

    // cout<<"Health is " << bunny->getHealth() << endl;
    // cout<<"Level is " << bunny->getLevel() << endl;

    //object created for Default Constructor 
    Hero ayanokoji(10);
    // cout<<"Address of ayanokoji "<< &ayanokoji << endl;
    // ayanokoji.getHealth();
    ayanokoji.print();

    Hero *ryugen = new Hero(11);
    ryugen->print();

    Hero hirata(22,'H');
    hirata.print();

}
