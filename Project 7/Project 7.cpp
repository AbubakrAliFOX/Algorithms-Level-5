#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    clsString S1;

    S1.Value = "Khaled";
    S1.Value = "Ahmad";
    S1.Value = "Abdo";
    S1.Value = "Bro";
    S1.Value = "k";
    S1.undo();
    S1.undo();
    S1.undo();
    S1.redo();
    S1.redo();
    S1.redo();
    cout << S1.Value << endl;
}
