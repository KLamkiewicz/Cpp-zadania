#include <iostream>
#include <string>
#include "TablicaAsoc.h"
#include <cstddef>

using namespace std;

int main()
{
    TablicaAsoc<int, int> t;
    t[7676] = 20;
    t[4334] = 2023;
    t[654] = 6770;
    t[123] = 6806;
    t.show();
    cout << t.size() << endl;

    TablicaAsoc<string, string> g;
    g["abc"] = "dfg";
    g["zxzxzx"] = "rr";
    g.show();
    cout << g.size() << endl;

    return 0;
}
