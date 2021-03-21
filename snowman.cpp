#include <iostream>
#include <string.h>
#include <stdio.h>
#include "snowman.hpp"
using namespace std;

using namespace std;
const int Tn = 10;
const int H = 100;
const int Th = 1000;
const int Tt = 10000;
const int Ht = 100000;
const int M = 1000000;
const int Tm = 10000000;

namespace ariel
{
    int SumDigit(long x)
    {
        int sum = 0;
        while (x != 0)
        {
            x = x / Tn;
            ++sum;
        }
        return sum;
    }

    bool ContainsDigit(long n)
    {
        while (n != 0)
        {
            if (n % Tn > 4 || n % Tn < 1)
            {
                return false;
            }
            n = n / Tn;
        }
        return true;
    }

    string snowman(long n)
    {
        const int d = 8;
        
        string left = " ";
        string right = " ";

        if (SumDigit(n) == d && ContainsDigit(n))
        {
            string final_str;

            while (n != 0)
            {
                switch (n / Tm % Tn) // לא לבדוק
                {
                case '1':
                    final_str.append("\n _===_\n");
                    break;
                case '2':
                    final_str.append("\n  ___\n");
                    final_str.append(" .....\n");
                    break;
                case '3':
                    final_str.append("  /_\\\n");
                    final_str.append("\n   _\n");
                    break;
                case '4':
                    final_str.append("\n  ___\n");
                    final_str.append(" (_*_)\n");
                    break;
                }

                switch (n / Th % Tn) //LO LIBDOK
                {
                case '1':
                    final_str.append(" (");
                    left = "<";
                    break;
                case '2':
                    final_str.append("\\(");
                    break;
                case '3':
                    final_str.append(" (");
                    left = "/";
                    break;
                case '4':
                    final_str.append(" (");
                    break;
                }

                switch (n / Ht % Tn)
                {
                case '1':
                    final_str.append("(.");
                    break;
                case '2':
                    final_str.append("(o");
                    break;
                case '3':
                    final_str.append("(O");
                    break;
                case '4':
                    final_str.append("(-");
                    break;
                }
                //n

                switch (n / M % Tn) // לא לבדוק
                {
                case '1':
                    final_str.append(",");
                    break;
                case '2':
                    final_str.append(".");
                    break;
                case '3':
                    final_str.append("_");
                    break;
                case '4':
                    final_str.append(" ");
                    break;
                }

                //r

                switch (n / Tt % Tn) //LO LBDOK
                {
                case '1':
                    final_str.append(".)");
                    break;
                case '2':
                    final_str.append("o)");
                    break;
                case '3':
                    final_str.append("O)");
                    break;
                case '4':
                    final_str.append("-)");
                    break;
                }
                //y

                switch (n / H % Tn) // לא לבדוק
                {
                case '1':
                    final_str.append("\n");
                    right = ">";
                    break;
                case '2':
                    final_str.append("/\n");
                    break;
                case '3':
                    final_str.append("\n");
                    right = "\\";
                    break;
                case '4':
                    final_str.append("\n");
                    break;
                }
                //t

                final_str.append(left);
                switch (n / Tn % Tn) // לא לבדוק
                {
                case '1':
                    final_str.append("( : )");
                    break;
                case '2':
                    final_str.append("(] [)");
                    break;
                case '3':
                    final_str.append("(> <)");
                    break;
                case '4':
                    final_str.append("(   )");
                    break;
                }

                final_str.append(right);
                final_str.append("\n");
                //b

                switch (n % Tn) // לא לבדוק
                {
                case '1':
                    final_str.append(" ( : )");
                    break;
                case '2':
                    final_str.append(" (\" \")");
                    break;
                case '3':
                    final_str.append(" (___)");
                    break;
                case '4':
                    final_str.append(" (   )");
                    break;
                }

                return final_str;
            }
        
        }
    throw std::out_of_range("bad input!"); 
    }
}