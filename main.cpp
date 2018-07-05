#include <iostream>

using namespace std;

int main()
{int d,prim,nr,x,cx,ctrl;
    cout<<"Introduceti numarul de numere:";
    cin>>x;
    cx=1;
    ctrl=0;
    while(cx<=x)
    {
        cout<<"Introduceti numarul:";
        cin>>nr;
        prim=1;
        if(nr==1)
        {
            prim=0;
        }
        for(d=2;d<=nr/2;d++)
        {
            if(nr%d==0)
            {
                prim=0;
            }
            else
            {
                ctrl=1;
            }
        }
        if(prim==1)
        {
            cout<<endl<<endl<<"Numarul "<<nr<<" este numar prim."<<endl<<endl<<endl;
        }
        else
        {
            cout<<endl<<endl<<"Numarul "<<nr<<" nu este numar prim."<<endl<<endl<<endl;
        }
        cx++;
    }
    if(ctrl=1)
    {
        cout<<endl<<endl<<endl<<endl<<"Exista numere prime in acest sir."<<endl<<endl<<endl<<endl;
    }
    if(ctrl=0)
    {
        cout<<endl<<endl<<endl<<endl<<"Nu exista numere prime in acest sir."<<endl<<endl<<endl<<endl;
    }
    return 0;
}
