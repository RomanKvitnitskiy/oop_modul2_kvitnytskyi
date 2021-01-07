#include <iostream>
#include <conio.h>
#include "Circle.h"
#include "Square.h"
#include "Rhombus.h"
#include <Windows.h>
using namespace std;

/* extra menu */
void secondMenu();
void title(char);

int main()
{
    Circle circle;
    Square square;
    Rhombus rhombus;
    
    bool flagCircle{}, flagSquare{}, flagRhombus{};
    double value{}, height{};

    char choise{}, ch{};

    while (choise != 27)
    {
        system("cls");

        cout << "\t\t----------------------------------------[Menu]----------------------------------------" << endl;
        cout << "Press 1: Start working with circle" << endl;
        cout << "Press 2: Start working with square" << endl;
        cout << "Press 3: Start working with rhombus" << endl;
        cout << "Press Esc: Exit" << endl;

        choise = _getch();

        /* circle */
        if (choise == 49)
        {
            while (ch != 27)
            {
                system("cls");

                title(choise);
                secondMenu();
                ch = _getch();

                /* new data */
                if (ch == 49)
                {
                    system("cls");

                    title(choise);

                    do
                    {
                        cout << "Radius ( >0 ) -> ";
                        cin >> value;

                    } while (value <= 0);
                    circle.setRadius(value);
                    flagCircle = 1;

                    cout << "\t\t\t\t****************New data has been recorded****************" << endl;
                    Sleep(2000);
                }

                /* area */
                if (ch == 50)
                {
                    system("cls");

                    title(choise);
                    if (!flagCircle)
                    {
                        cout << "You have not entered any values yet, please enter them:" << endl;
                        do
                        {
                            cout << "Radius ( >0 ) -> ";
                            cin >> value;

                        } while (value <= 0);

                        circle.setRadius(value);
                        flagCircle = 1;
                    }
                    circle.Area();
                    system("pause");
                }

                /* perimeter */
                if (ch == 51)
                {
                    system("cls");

                    title(choise);
                    if (!flagCircle)
                    {
                        cout << "You have not entered any values yet, please enter them:" << endl;
                        do
                        {
                            cout << "Radius ( >0 ) -> ";
                            cin >> value;

                        } while (value <= 0);

                        circle.setRadius(value);
                        flagCircle = 1;
                    }
                    circle.Perimeter();
                    system("pause");
                }

                /* show */
                if (ch == 52)
                {
                    system("cls");

                    title(choise);
                    if (circle.getArea() == 0 || circle.getPerimeter() == 0)
                        cout << "You have not finished calculations yet, please finish all calculations" << endl;
                    else
                        circle.Output();
                    system("pause");
                }
            }
        }

        /* square */
        if (choise == 50)
        {
            while (ch != 27)
            {
                system("cls");

                title(choise);
                secondMenu();
                ch = _getch();

                /* new data */
                if (ch == 49)
                {
                    system("cls");

                    title(choise);

                    do
                    {
                        cout << "Side ( >0 ) -> ";
                        cin >> value;

                    } while (value <= 0);
                    square.setSide(value);
                    flagCircle = 1;

                    cout << "\t\t\t\t****************New data has been recorded****************" << endl;
                    Sleep(2000);
                }

                /* area */
                if (ch == 50)
                {
                    system("cls");

                    title(choise);
                    if (!flagSquare)
                    {
                        cout << "You have not entered any values yet, please enter them:" << endl;
                        do
                        {
                            cout << "Side ( >0 ) -> ";
                            cin >> value;

                        } while (value <= 0);

                        square.setSide(value);
                        flagSquare = 1;
                    }
                    square.Area();
                    system("pause");
                }

                /* perimeter */
                if (ch == 51)
                {
                    system("cls");

                    title(choise);
                    if (!flagSquare)
                    {
                        cout << "You have not entered any values yet, please enter them:" << endl;
                        do
                        {
                            cout << "Side ( >0 ) -> ";
                            cin >> value;

                        } while (value <= 0);

                        square.setSide(value);
                        flagSquare = 1;
                    }
                    square.Perimeter();
                    system("pause");
                }

                /* show */
                if (ch == 52)
                {
                    system("cls");

                    title(choise);
                    if (square.getArea() == 0 || square.getPerimeter() == 0)
                        cout << "You have not finished calculations yet, please finish all calculations" << endl;
                    else
                        square.Output();
                    system("pause");
                }
            }
        }

        /* rhombus */
        if (choise == 51)
        {
            while (ch != 27)
            {
                system("cls");

                title(choise);
                secondMenu();
                ch = _getch();

                /* new data */
                if (ch == 49)
                {
                    system("cls");

                    title(choise);

                    do
                    {
                        cout << "Side ( >0 ) -> ";
                        cin >> value;
                        cout << "Height (>0 ) -> ";
                        cin >> height;

                    } while (value <= 0 || height <= 0);

                    rhombus.setSide(value);
                    rhombus.setHeight(height);
                    flagRhombus = 1;

                    cout << "\t\t\t\t****************New data has been recorded****************" << endl;
                    Sleep(2000);
                }

                /* area */
                if (ch == 50)
                {
                    system("cls");

                    title(choise);
                    if (!flagRhombus)
                    {
                        cout << "You have not entered any values yet, please enter them:" << endl;

                        do
                        {
                            cout << "Side ( >0 ) -> ";
                            cin >> value;
                            cout << "Height (>0 ) -> ";
                            cin >> height;

                        } while (value <= 0 || height <= 0);

                        rhombus.setSide(value);
                        rhombus.setHeight(height);
                        flagRhombus = 1;
                    }
                    rhombus.Area();
                    system("pause");
                }

                /* perimeter */
                if (ch == 51)
                {
                    system("cls");

                    title(choise);
                    if (!flagRhombus)
                    {
                        cout << "You have not entered any values yet, please enter them:" << endl;

                        do
                        {
                            cout << "Side ( >0 ) -> ";
                            cin >> value;
                            cout << "Height (>0 ) -> ";
                            cin >> height;

                        } while (value <= 0 || height <= 0);

                        rhombus.setSide(value);
                        rhombus.setHeight(height);
                        flagRhombus = 1;
                    }
                    rhombus.Perimeter();
                    system("pause");
                }

                /* show */
                if (ch == 52)
                {
                    system("cls");

                    title(choise);
                    if (rhombus.getArea() == 0 || rhombus.getPerimeter() == 0)
                        cout << "You have not finished calculations yet, please finish all calculations" << endl;
                    else
                        rhombus.Output();
                    system("pause");
                }
            }
        }

        ch = 0;
    }
    return 0;
}

void secondMenu()
{
    cout << "Press 1: Enter new data" << endl;
    cout << "Press 2: Calculate area" << endl;
    cout << "Press 3: Calculate perimeter" << endl;
    cout << "Press 4: Show area and perimeter" << endl;
    cout << "Press Esc: Exit" << endl;
}
void title(char choise)
{
    if (choise == 49)
        cout << "\t\t\t--------------------------------[Circle]--------------------------------" << endl;
    else if (choise == 50)
        cout << "\t\t\t--------------------------------[Square]--------------------------------" << endl;
    else if (choise == 51)
        cout << "\t\t\t--------------------------------[Rhombus]--------------------------------" << endl;
}
