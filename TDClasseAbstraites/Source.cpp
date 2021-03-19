#include <iostream>
#include "CFigure.h"
#include "CRectangle.h"
using namespace std;

int main()
{
   CRectangle* sPtr;

    CRectangle Rect;
    sPtr = &Rect;
    
    sPtr->aire(5, 3);
    cout << "L'air du rectangle est " << sPtr->aire(5, 3) << endl;

}


















   /* CFigure* Fig;
    CRectangle Rect;
    Fig = &Rect;
    Rect.aire(20, 30);*/
    
    /*CFigure* Sptr;
    CRectangle Rect;*/






