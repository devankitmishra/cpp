#include <iostream>
using namespace std;

class Hero
{   
    private:
    int health;
    
    public:
    char *name;
    char level;


    // Default Constructor
    Hero(){
        cout<<"Default Constructor Called"<<endl; 
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

    //Copy Constructor
    Hero(Hero& temp){ // always pass by reference in copy constructor
        cout<<"Copy Constructor Called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }

    //Print Function
    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }

    //Getter & Setter
    int getHealth() { return health; }
    int getLevel() { return level; }
    int setHealth(int h) {health = h;}
    int setLevel(int l) { level = l; }
};

int main()
{   

    //static keyword
    











    // //static creation
    // Hero a;

    // //dynamic creation
    // Hero *b = new Hero();
    // delete b; //for dynamically created objects destructor needs to be called manually

    // return 0;








    // Hero S(70,'C');
    // S.print();

    // //Copy Constructor
    // Hero R(S);
    // R.print();

    // R.health = S.health;
    // R.level = S.level;





//     Hero hero1;

//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     //hero1.print();

//     //use default copy constructor

//     Hero hero2(hero1);
//     //hero2.print();
// //    Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     hero1 = hero2;

//     hero1.print();

//     hero2.print();
     







    // //Static allocate 
    // Hero ankit;
    // // ankit.health = 100;
    // // ankit.level = '@';
    // ankit.setHealth(100);
    // ankit.setLevel('@');f

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




    // //object created for Default Constructor 
    // Hero ayanokoji(10);
    // // cout<<"Address of ayanokoji "<< &ayanokoji << endl;
    // // ayanokoji.getHealth();
    // ayanokoji.print();

    // Hero *ryugen = new Hero(11);
    // ryugen->print();

    // Hero hirata(22,'H');
    // hirata.print();

}


// home work
// what's const keyword and how is it used for 
// creating objects ,functions and member data type ?
// what's initialization list ?


