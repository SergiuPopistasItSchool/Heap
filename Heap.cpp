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
    Enemy* inamic_2 = nullptr;
    inamic_2 = new Enemy();
    inamic_2->m_name = "DarthVader";

    std::cout << "Te lupti cu Darth Vader , ce power level ai? " << std::endl;
    int power_level;
    std::cin >> power_level;

    if (power_level > 10)
    {
        std::cout << "Ai castigan, il chilarim pe DarthVader\n";
        delete inamic_2;
        inamic_2 = nullptr;
    }

    //daca inamicul inca este in viata il stergem
    if (inamic_2 != nullptr)
        delete inamic_2;
}

/*
 Cool
Se consideră un șir A format din N elemente naturale nenule. 
Numim secvență de lungime K a șirului A orice succesiune de elemente consecutive din șir de forma
Ai, Ai+1, ..., Ai+K-1.
O secvență o numim secvență cool dacă elementele care o compun sunt distincte 
și pot fi rearanjate astfel încât să alcătuiască o secvență continuă de numere consecutive. 
De exemplu, considerând șirul
A = (3, 1, 6, 8, 4, 5, 6, 7, 4, 3, 4), atunci secvența (8, 4, 5, 6, 7) este o secvență cool deoarece conține
elemente distincte ce pot fi rearanjate astfel încât să alcătuiască șirul de numere consecutive 
4, 5, 6, 7, 8, pe când secvențele (4, 3, 4), (6, 7, 4, 3) nu sunt considerate secvențe cool.
Cerință:
    Pentru o valoare dată K să se verifice dacă secvența A1, A2 ... AK este secvență cool.
    Dacă secvența este cool, atunci se va afișa cea mai mare valoare ce aparține secvenței.
    Dacă secvența nu este cool, atunci se va afișa numărul elementelor distincte din sir
    adică numărul elementelor care apar o singură dată.
        Daca sunt mai multe secvente cool se va printa numarul cel mai mare din secventele cool
Date de intrare:
    Se citesc N și K de la tastatură care vor determina numărul de elemente din sir respectiv lungimea secvenței
    cool de verificat.

Exemple:
INPUT:
7 4
6 4 5 7 8 3 5
OUTPUT:
7
Secvența 6 4 5 7 este cool.
Valoarea maximă din secvență este 7
INPUT:
7 6
6 4 5 7 5 4 3
OUTPUT:
3

Secvența 6 4 5 7 5 4  si nici 4 5 7 5 4 3 nu este secvență cool. Numărul valorilor distincte din secvență este 3.
Valorile distincte sunt: 6, 7, 3

Tema2:
Dothraki plănuiesc să usurpe tronul Regelui Robert. 
Regele Robert aude de această conspirație de la un raven și plănuiește să încuie singura ușă prin c
are inamicul poate să pătrundă în regat lui.
    Dar această ușă are nevoie de o cheie care este reprezentată de către anagrama unui palindrom. 
    începe să caute în cutia lui de șiruri de caractere, 
    verificând pe fiecare în parte dacă poate fi rearanjat într-un palindrom.
Cerință:
    Pentru un șir de caractere, să se tipărească pe ecran cuvântul DA sau NU dacă acest 
    șir poate fi rearanjat astfel încât să fie un palindrom.
Constrangeri:
Poate fi folosite doar caractere din alfabetul latin cu litere mici
Date de intrare:
    Șirul de caractere.
Exemplu:
INPUT:
aaabbbb
OUTPUT:
DA


Șirul poate fi permutat astfel: bbaaabb



*/
