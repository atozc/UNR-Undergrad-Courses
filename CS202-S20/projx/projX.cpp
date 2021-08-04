/**
 * @ Name: CS 202 - Project X
 * @ Desciption: projX.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 4/6/20
 */


#include <iostream>
#include "SmartPtr.hpp"
#include "DataType.hpp"

using namespace std;


int main() {
    
    cout << endl << "Testing SmartPtr Dflt-ctor..." << endl;
     SmartPtr sp1;  // Default-ctor
     cout << "Default-ctor works!" << endl;
     sp1->setIntVal(1);
     sp1->setDoubleVal(0.25);
     cout << "Dereference Smart Pointer 1: " << *sp1 << endl;
     cout << endl << "Testing SmartPtr Copy-ctor..." << endl;
     SmartPtr sp2 = sp1;  // Copy-initalization (Copy-ctor)
     cout << "Copy Initilization works!" << endl;
     sp2->setIntVal(2);
     sp2->setDoubleVal(0.5);
     cout << "Dereference Smart Pointer 1 Post SetIntVal: " << *sp1 << endl;
     cout << "Dereference Smart Pointer 2 Post SetIntVal: " << *sp2 << endl;
     cout << endl << "Testing SmartPtr Assignment Operator..." << endl;
     SmartPtr sp3;
     cout << "Default Ctor SmartPtr sp3 works!" << endl;
     sp3 = sp1;  // Assignment operator
     cout <<"Assignment Operator works!" << endl;
     sp3->setIntVal(4);
     sp3->setDoubleVal(0.0);
     cout << "Dereference Smart Pointer 1: " << *sp1 << endl;
     cout << "Dereference Smart Pointer 2: " << *sp2 << endl;
     cout << "Dereference Smart Pointer 3: " << *sp3 << endl;
     cout << endl << "Testing SmartPtr Parametrized ctor with NULLdata..." << endl;
     SmartPtr spNull( NULL ); // NULL-data initialization
     cout << "SmartPtr NULL Parameterized-ctor works!" << endl;
     cout << endl << "Testing SmartPtr Copy ctor with NULL data SmartPtr..." << endl;
     SmartPtr spNull_cpy( spNull ); // NULL-data copy constructor
     cout << "SmartPtr Copy-ctor spNull_cpy works!" << endl;
     cout << endl << "Testing SmartPtr Assignment with NULLdata SmartPtr..." << endl;
     SmartPtr spNull_assign;
     spNull_assign = spNull; // NULL-data assign
     cout << endl << "End-of-Scope, Destructors called in reverse order of ";
     cout << "SmartPtr creation\n (spNull_assign, spNull_cpy, spNull, ";
     cout << "sp3, sp2, sp1): " << endl;

    return 0;
}
