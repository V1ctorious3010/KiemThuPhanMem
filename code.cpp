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


int main()
{

}
