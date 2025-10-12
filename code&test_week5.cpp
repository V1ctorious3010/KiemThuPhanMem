#include <bits/stdc++.h>
using namespace std;

string myCode(int n, int is_inner)
{
    if (n < 0 || n > 20 || (is_inner != 0 && is_inner != 1))
        return "INVALID";

    if (is_inner)
        return "0d";
    else if (n <= 5)
        return "15000d";
    else
        return "0d";
}

struct TestCase
{
    int n, is_inner;
    string expected;
};

int main()
{
    vector<TestCase> tests =
    {
        {-1, 0, "INVALID"},
        {4, 0, "15000d"},
        {10, 0, "0d"},
        {4, 0, "15000d"},
        {3, 1, "0d"},
        {10, 0, "0d"}
    };

    for (int i = 0; i < (int)tests.size(); i++)
    {
        string actual = myCode(tests[i].n, tests[i].is_inner);
        cout << "Test " << i + 1 << ": "
             << (actual == tests[i].expected ? "Pass" : "Fail") << "\n";
    }
}
