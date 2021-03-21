#include <iostream>
#include "CFigure.h"
#include "CRectangle.h"
#include "CCercle.h"
using namespace std;

int main()
{
    CFigure* sPtr;

    CRectangle Rect;
    sPtr = &Rect;
    
    sPtr->aire(5, 2, 3);
    cout << "L'air du rectangle est " << sPtr->aire(5, 2, 3) << endl;

    sPtr->perimetre(5, 2, 3);
    cout << "Le perimetre du rectangle est " << sPtr->perimetre(5, 2, 3) << endl;

    CCercle Cercle;

    sPtr = &Cercle;
    sPtr->aire(5, 2 , 3);
    cout << "L'air du Cercle est " << sPtr->aire(5, 2, 3) << endl;

    sPtr->perimetre(5, 2, 3);
    cout << "Le perimetre du Cercle est " << sPtr->perimetre(5, 2, 3) << endl;

}


















   /* CFigure* Fig;
    CRectangle Rect;
    Fig = &Rect;
    Rect.aire(20, 30);*/
    
    /*CFigure* Sptr;
    CRectangle Rect;*/






