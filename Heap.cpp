#include <iostream>
#include <string>

class Enemy {
public:
    Enemy() { 
        std::cout << "A enemy was created\n"; };
    ~Enemy() { 
        std::cout << "A enemy was Destroyed\n"; 
    };
    std::string m_name;
};

Enemy createEnemy()
{
    Enemy e;
    return e;
}


int main()
{
    //Enemy inamic = createEnemy();
    // pointer * nume_ptr = new Obj()
    int* numar = new int();
   // Enemy e = Enemy(); e este pe stiva -> destructor chemat automat la sf lui main
    Enemy* inamic = new Enemy(); // inamicul a fost creat pe heap si nu este distrus
    delete inamic; // delete va chema destrcutorul inamicului
}