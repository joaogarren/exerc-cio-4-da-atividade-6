#include <iostream>
using namespace std;

int main()
{
    int op;

    cout << "1. Feitiço de fogo" << endl;
    cout << "2. Feitiço de gelo" << endl;
   cin >> op;

    switch(op)
    {
        case 1:
            cout << "feitiço lançado,voce ganhou"<<endl;
            break;
            
        case 2:
            cout << "feitiço lançado,voce perdeu"<<endl;
            break;
        }
        
        return 0;
}