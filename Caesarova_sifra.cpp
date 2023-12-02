#include <iostream>
#include <string>

using namespace std;

int main() {

    /*
    setlocale("", LC_ALL);   //tahle funkce je asi prokleta nebo idk proc nefunguje frr
    */

    string result;

    cout << "Zadejte text k zasifrovani: " << endl;
    cin >> result;
    

    for (char& c : result) {   //edit kazdyho znaku directly z c ve stringu result
        if ('a' <= c && c <= 'z') {    //checkuje jestli c je maly (input malych pismen)
            c = 'a' + (c - 'a' + 13) % 26;      //shiftnutí na 0 v ascii & +13; %26 (pocet pismen v ascii (mala)
        }
        else if ('A' <= c && c <= 'Z') {     //pro inp velkych pismen
            c = 'A' + (c - 'A' + 13) % 26;    //to samy s velkyma
        }
    }

    cout << "Vysledek: " << result << endl;

    return 0;
}
