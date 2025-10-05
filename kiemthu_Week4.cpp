#include <bits/stdc++.h>
#include <cassert>
using namespace std;

string myCode(int n,int is_inner)
{
    if (n < 0 || n > 20 || (is_inner != 0 && is_inner != 1))
    {
        return "INVALID";
    }
    if (is_inner)
    {
        return "0d";
    }
    else
    {
        if (n <= 5)
        {
           return "15000d";
        }
        else
        {
            return "0d";
        }
    }
}
struct TC
{
    int n, is_inner;
    string expect;
};

int main()
{
    vector<TC> tests =
    {
        {21, 0, "INVALID"},
        {20, 1, "0d"},
        {5,  0, "15000d"},
        {15,  0, "0d"},
    };

    for (size_t i = 0; i < tests.size(); ++i)
    {
        const auto& t = tests[i];
        string got = myCode(t.n, t.is_inner);
        assert(got == t.expect);
        cout << "Test " << (i+1) << " passed: fee("
             << t.n << ", " << t.is_inner << ") = " << got << '\n';
    }
    cout << "All tests passed.\n";
    return 0;
}
