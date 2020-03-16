#include <iostream>
using namespace std;
class Pokemon
{
private:
    string name;
    int health;
    int exp;
    string type;

public:
    Pokemon();
    void fight();
    void rest();
    void attributes();
    void menu();
    void setName(string n);
    void setType(string n);
    void setHealth(int n);
    int getHealth(){return health;}
    int getExp(){return exp;}
    string getName(){return name;}
};

Pokemon::Pokemon()
{
    name = "";
    health = 100;
    exp = 0;
    type = "";
}

void Pokemon::setName(string n)
{
    name = n;
}

void Pokemon::setType(string n)
{
    type = n;
}

void Pokemon::setHealth(int n)
{
    health = n;
}

void Pokemon::fight()
{
    cout<<"Vous rencontrez un pokemon sauvage"<<endl;
    int randomNumber = (rand() % 3);
    bool win = false;
    int choice = 0 ;
    int choiceAtt = 0 ;

    while (win == false) {
        cout<<"Choisissez une action :  1 Attaque , 2 Capture"<<endl;
        cin>> choice;

        if (choice == 1 ){
            cout<<"Choisissez une attaque : "<<endl;
            if (choiceAtt == 0){

            }
            if (choiceAtt == 1){

            }
            if (choiceAtt == 2){

            }
            if (choiceAtt == 3){

            }
        }
        if (choice == 2){
            if(randomNumber == 0){
                cout<<"Bravo le pokemon est capturé"<<endl;
            }else{
                cout<<"Oh non .... s'est libéré"<<endl;
            }
        }
    }
    if (randomNumber == 0)
    {
        cout<<"You lost the fight!"<<endl;
        exp = exp +5;
        health = health -15;
        if(health <0)
        {
            cout<<"Your Pokemon has fainted..."<<endl;
            health = 0;
        }
        cout<<"Current Health: "<<health<<endl;
        cout<<"Current Exp: "<<exp<<endl;
    }
    if (randomNumber == 1)
    {
        cout<<"You tied the fight!"<<endl;
        exp = exp +10;
        health = health -10;
        if(health <0)
        {
            cout<<"Your Pokemon has fainted..."<<endl;
            health = 0;
        }
        cout<<"Current Health: "<<health<<endl;
        cout<<"Current Exp: "<<exp<<endl;
    }
    if (randomNumber == 2)
    {
        cout<<"You won the fight!"<<endl;
        exp = exp +15;
        health = health -5;
        if(health <0)
        {
            cout<<"Your Pokemon has fainted..."<<endl;
            health = 0;
        }
        cout<<"Current Health: "<<health<<endl;
        cout<<"Current Exp: "<<exp<<endl;
    }

    if(exp >= 100)
    {
        cout<<"Congratulations! Your Pokemon has evolved!"<<endl;
    }

    return;
}

void Pokemon::rest()
{
    cout<<name<<" has rested..."<<endl;
    health = health +10;
    exp = exp-5;
    if(health> 100)
    {
        health = 100;
        cout<<"Your pokemon is fully rested!"<<endl;
    }
    if(exp <0)
    {
        exp = 0;
    }
    cout<<"Current Health: "<<health<<endl;
    cout<<"Current Exp: "<<exp<<endl;

    return;
}

void Pokemon::attributes()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Current HP pts: "<<health<<endl;
    cout<<"Current Exp pts: "<<exp<<endl;


    return;
}

void Pokemon::menu()
{
    int choice = 0;
    cout<<"Enter 0 for attributes(stats), 1 for Fight, 2 for Exit"<<endl;
    cin>>choice;
    while(choice !=2)
    {
        if (choice == 0)
        {
            attributes();
        }
        if (choice == 1)
        {
            fight();
        }
        cout<<"Enter 0 for attributes(stats), 1 for Rest, 2 for Fight, 3 for Exit"<<endl;
        cin>>choice;
    }
    cout<<"Merci et à plus tard !"<<endl;
}

int main()
{
    Pokemon myPoke;

    myPoke.setName("Salamèche");
    myPoke.setHealth(75);
    myPoke.setType("feu");

    Pokemon savagePoke;
    savagePoke.setName("Kenotor");
    savagePoke.setHealth(50);
    savagePoke.setType("normal");

    myPoke.menu();

    return 0;
}
