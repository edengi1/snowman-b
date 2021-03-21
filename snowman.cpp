#include <string>
#include <iostream>
namespace ariel
{
    std::string snowman(int num){
        const int Ten=10;
        const int Hundred=100;
        const int Thousand=1000;
        const int TenThousand=10000;
        const int HundredThousand=100000;
        const int million=1000000;
        const int TenMillion=10000000;
        const int x=1;
        const int y=4;
        const int z=0;
        const int j=8;
        int a=num;
        int b=0;
        int count=z;
        while(a>z)
        {
            b=a%Ten;
            if(b>y || b<x)
            {
                throw("bigger then four or smaller then 1");
            }
            a=a/Ten;
            count++;
        }
        if(count!=j)
        {
            throw("more or less then 8 digits");
        }
        std::string n;
        b=num/TenMillion;
        int k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+" \n_===_\n";
            break;
        case 2:
            n=n+"  ___\n .....\n";
            break;
        case 3:
            n="   _ \n  /_\\\n"+n;
            break;
        case 4:
            n="  ___\n (_*_)\n"+n;
            break;
    
        }
        b=num/Thousand;
        k=b%Ten;
        if(k==2){
            n=n+"\\";
        }
        b=num/HundredThousand;
        k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+"(.";
            break;
        case 2:
            n=n+"(o";
            break;
        case 3:
            n=n+"(O";
            break;
        case 4:
            n=n+"(-";
            break;
        }
        b=num/million;
        k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+",";
            break;
        case 2:
            n=n+".";
            break;
        case 3:
            n=n+"_";
            break;
        case 4:
            n=n+" ";
            break;
        }
        b=num/TenThousand;
        k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+".)";
            break;
        case 2:
            n=n+"o)";
            break;
        case 3:
            n=n+"O)";
            break;
        case 4:
            n=n+"-)";
            break;
        }
        b=num/Hundred;
        k=b%Ten;
        if(k==2){
            n=n+"/";
        }
        b=num/Thousand;
        k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+("\n<");
            break;
        case 2:
            n=n+"\n ";
            break;
        case 3:
            n=n+"\n/";
            break;
        case 4:
            n=n+"\n ";
            break;
        }
        b=num/Ten;
        k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+"( : )";
            break;
        case 2:
            n=n+"(] [)";
            break;
        case 3:
            n=n+"(> <)";
            break;
        case 4:
            n=n+"(   )";
            break;       
        }
        b=num/Hundred;
        k=b%Ten;
        switch (k)
        {
        case 1:
            n=n+(">\n");
            break;
        case 2:
            n=n+" \n";
            break;
        case 3:
            n=n+"\\\n";
            break;
        case 4:
            n=n+" \n";
            break;
        }
        k = num%Ten;
        switch (k)
        {
        case 1:
            n=n+" ( : )";
            break;
        case 2:
            n=n+" (\" \")";
            break;
        case 3:
            n=n+" (___)";
            break;
        case 4:
            n=n+" (   )";
            break;
        }
        return n;
    }
}