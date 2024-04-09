#include <iostream>
#include <windows.h> // For SetConsoleTextAttribute() function
#include <stdio.h>
#include <conio.h>
#include <iomanip> 	// for setw()
using namespace std;

class Menu
{
public:
    string v = " Vada Pav ", b = " Bhaji-Pav ", s = " Samosa Pav ", m = " Misal-Pav ", u = " Usal-Pav ", p = " Patties ";
    double vadapav = 20, bhaji_Pav = 20, samosa_Pav = 20, misal_Pav = 60, usal_Pav = 30, patties = 30;
    static int quantity_of_order_for_snacks, quantity_of_order_for_beverages, order_choice, order_choice2, snacks_choice, beverages_choice;
    double print_price();
    void display();
    void main_menu();
    void snacks_menu();
    void snacks_switch();
    void beverages_menu();
    void beverages_switch();
    void quantities(string);
    void reorder();
    double set_price_for_snacks(int);
    double set_price_for_beverages(int);
    string beverages_name(int);
    string snacks_name(int);
    void print_bill(string, int, double, string, int, double);
    void bill();
    void loading();
};

int main()
{
    Menu obj;
    obj.main_menu();
    return 0;
}

void Menu ::main_menu()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    system("pause");
    int main_choice;
    cout << "\n \n";
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "              ***** ENGINEER'S THELA *****               "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "            ~~~~~~~~~~ * WELCOME * ~~~~~~~~~~            "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                       1. Snacks                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      2. Beverages                       "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                     3. Want to exit                     "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout << "                      Enter your choice : ";
    cin >> main_choice;
    cout << "\t\t\t\t\t\t\t\t";cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << endl;
    cout << endl;
    switch (main_choice)
    {
    case 1:
        snacks_switch();
        break;
    case 2:
        beverages_menu();
        break;
    case 3:
        cout << "\t\t\t\t\t\t\t\t";cout << " Dhanyawaad for coming to our restaurant \n Exiting... ";
        exit(0);
    default:
        cout << "\t\t\t\t\t\t\t\t";cout << "Please enter valid choice (1-3) ";
        break;
    }
    system("pause");
}

void Menu ::snacks_menu()
{
    HANDLE u = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(u, 3);
    cout << endl;
    cout << endl;
    system("pause");
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                        Snacks :                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << " Sr. No.              ITEM NAME :               PRICE :  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "  ---                    ---                     ---     "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   1.                  Vadapav                 (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   2.              Batata-Bhaji Pav            (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   3.                Samosa-Pav                (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   4.                 Misal-Pav                (Rs. 60)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   5.                  UsalPav                 (Rs. 30)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   6.                Bread Patties             (Rs. 25)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   7.               Go to Main Menu           (Enter 7)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   8.            Go to Beverages Menu         (Enter 8)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   9.               Exit Restaurant           (Enter 9)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "               Please enter your choice (1-9) : ";
    cin >> snacks_choice;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;   
}

void Menu ::snacks_switch()
{
    snacks_menu();
    HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(w,9);
    int choice = snacks_choice;
    switch (choice)
    {
    case 1:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "        Enter the quantity of Vadapav you want : ";
        cin >> quantity_of_order_for_snacks;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 2:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "        Enter the quantity of Bhaji Pav you want : ";
        cin >> quantity_of_order_for_snacks;
        cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 3:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "        Enter the quantity of Samosa-Pav you want : ";
        cin >> quantity_of_order_for_snacks;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 4:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "        Enter the quantity of Misal-Pav you want : ";
        cin >> quantity_of_order_for_snacks;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 5:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "        Enter the quantity of Usal Pav you want : ";
        cin >> quantity_of_order_for_snacks;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 6:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "        Enter the quantity of Bread Patties you want : ";
        cin >> quantity_of_order_for_snacks;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 7:
        main_menu();
        break;
    case 8:
        beverages_switch();
        break;
    case 9:
        cout << "\t\t\t\t\t\t\t\t";cout << " DHANYAWAAD :) " << endl;
        exit(0);
    default:
        cout << "\t\t\t\t\t\t\t\t";cout << "|               Please enter valid option                 |" << endl;
        break;
    }
    system("pause");
    reorder();
}
void Menu ::beverages_menu()
{
    HANDLE j = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(j, 3);
    cout << endl;
    cout << endl;
    system("pause");
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                        Beverages :                      "; cout.put(177)<< endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << " Sr. No.              ITEM NAME :               PRICE :  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "  ---                    ---                     ---     "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   1.                    Tea                   (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   2.                 Masala Tea               (Rs. 12)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   3.                Kullhad Tea               (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   4.               Punjabi Lassi              (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   5.                   Chhas                  (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   6.                  Coffeee                 (Rs. 20)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   7.               Go to Main Menu           (Enter 7)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   8.              Go to Snacks Menu          (Enter 8)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "   9.               Exit Restaurant           (Enter 9)  "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "                                                         "; cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177) << "            Please enter your choice (1-8) : ";
    cin >> beverages_choice;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
}


void Menu ::beverages_switch()
{
    HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(w,9);
    beverages_menu();
    int choice = beverages_choice;
    switch (choice)
    {
    case 1:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "          Enter the quantity of Tea you want : ";
        cin >> quantity_of_order_for_beverages;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 2:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "          Enter the quantity of Masala Tea you want : ";
        cout << "\t\t\t\t\t\t\t\t";cin >> quantity_of_order_for_beverages;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 3:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "          Enter the quantity of Kullhad Tea you want : ";
        cin >> quantity_of_order_for_beverages;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 4:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "          Enter the quantity of Punjabi Lassi you want : ";
        cin >> quantity_of_order_for_beverages;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 5:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "          Enter the quantity of Chhas you want : ";
        cin >> quantity_of_order_for_beverages;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 6:
        cout << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "          Enter the quantity of Coffee you want : ";
        cin >> quantity_of_order_for_beverages;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        break;
    case 7:
        main_menu();
        break;
    case 8:
        snacks_switch();
        break;
    case 9:
        cout << "\t\t\t\t\t\t\t\t";cout << " DHANYAWAAD :) " << endl;
        exit(0);
    default:
        cout << "\t\t\t\t\t\t\t\t";cout << "|                 Please enter valid option                |" << endl;
        break;
    }
    system("pause");
    reorder();
}

void Menu ::reorder()
{
    string n = snacks_name(snacks_choice);
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|              Want to oder anything else ? :             |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|            1. YES                     2. NO             |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "                Enter your choice (1/2) : ";
    cin >> order_choice;
    switch (order_choice)
    {
    case 1:
        cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "|            1. Snacks              2. Beverage           |" << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "|          3. Place the order make the Bill & exit        |" << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        cout << "\t\t\t\t\t\t\t\t";cout << "                   Enter your choice : ";
        cin >> order_choice2;
        cout << "\t\t\t\t\t\t\t\t";cout.put(177);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(177) << endl;
        switch (order_choice2)
        {
        case 1:
            snacks_switch();
            break;
        case 2:
            beverages_switch();
            break;
        case 3:
            loading();
            print_bill(n, quantity_of_order_for_snacks, set_price_for_snacks(snacks_choice), beverages_name(beverages_choice), quantity_of_order_for_beverages, set_price_for_beverages(beverages_choice));
            break;
        default:
            cout << "\t\t\t\t\t\t\t\t";cout << "|             Enter Valid choice                      |" << endl;
            break;
        }
        break;
    case 2:
        loading();
        print_bill(n, quantity_of_order_for_snacks, set_price_for_snacks(snacks_choice), beverages_name(beverages_choice), quantity_of_order_for_beverages, set_price_for_beverages(beverages_choice));
        break;
    default:
        cout << "\t\t\t\t\t\t\t\t";cout << "|             Enter Valid choice                      |" << endl;
        break;
    }
}

void Menu::print_bill(string snacks_name, int snacks_quantity, double snacks_price, string beverages_name, int beverages_quantity, double beverages_price)
{
    HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(w,12);
    double snacks_total = snacks_quantity * snacks_price;
    double beverages_total = beverages_quantity * beverages_price;
    double total = snacks_total + beverages_total;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "***********************************************************" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "*                ~~~~~~~~~~~~~~~~~~~~~                    *" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "*                ~ ENGINEER'S THEELA ~                    *" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "*                ~~~~~~~~~~~~~~~~~~~~~                    *" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "*     Near IIT Dholakpur, Muktabai Hospital, Kota,        *" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "*              Rajasthan, Bharat - 400084                 *" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "*                                                         *" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "***********************************************************" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "      ---------------------BILL-----------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|                                                         |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Date : 29th Jan, 2007                                   |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Bill no. 69                                             |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|                        -----                            |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Snacks Name :                        : " << snacks_name << "          | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Snacks Quantity :                    : " << snacks_quantity << "                | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Snacks Total :                       : " << snacks_total << "               | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|                        -----                            |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Beverages Name :                     : " << beverages_name << "              | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Beverages Quantity :                 : " << beverages_quantity << "                | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| Beverages Total :                    : " << beverages_total << "               | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|                        -----                            |" << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "| TOTAL                                : " << total << "               | " << endl;
    cout << "\t\t\t\t\t\t\t\t";cout << "|---------------------------------------------------------|" << endl;
}

double Menu ::set_price_for_snacks(int option)
{
    double price;
    if (option <= 1 || option >= 3)
    {
        price = 20;
    }
    else if (option == 4)
    {
        price = 60;
    }
    else if (option == 5)
    {
        price = 25;
    }
    else if (option == 6)
    {
        price = 30;
    }
    return price;
}

double Menu ::set_price_for_beverages(int option)
{
    double price;
    if (option <= 3 || option >= 6)
    {
        price = 20;
    }
    else if (option == 1)
    {
        price = 7;
    }
    else if (option == 2)
    {
        price = 12;
    }

    return price;
}

string Menu ::snacks_name(int option)
{
    string name;
    if (option == 1)
    {
        name = "Vadapav";
    }
    else if (option == 2)
    {
        name = "Bhaji-Pav";
    }
    else if (option == 3)
    {
        name = "Samosa-Pav";
    }
    else if (option == 4)
    {
        name = "Misal-Pav";
    }
    else if (option == 5)
    {
        name = "Usal-Pav";
    }
    else if (option == 6)
    {
        name = "Bread-Patties";
    }
    return name;
}

string Menu ::beverages_name(int option)
{
    string name;
    if (option == 1)
    {
        name = "Tea";
    }
    else if (option == 2)
    {
        name = "Masala Tea";
    }
    else if (option == 3)
    {
        name = "Kulhad Tea";
    }
    else if (option == 4)
    {
        name = "Punjabi Lassi ";
    }
    else if (option == 5)
    {
        name = "Chhaas";
    }
    else if (option == 6)
    {
        name = "Coffee";
    }
    return name;
}

void Menu :: loading()
{
    printf("\e[?251]");

	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int bar1 = 177, bar2 = 219;

    cout << endl;
    cout << endl;
	cout << "\n\n\n\t\t\t\t\t\t\t\t\t  Please will till bill is processing";
	cout << "\n\n\t\t\t\t\t\t\t\t\t\t";

	for (int i = 0; i < 25; i++)
	         cout << (char)bar1;

	cout << "\r";
	cout << "\t\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i < 25; i++)
	{
		cout << (char)bar2;
		Sleep(180);
	}

	cout << "\n\t\t\t\t\t\t\t\t\t\t" << (char)1 << "!";
	system("Pause");
}

int Menu ::quantity_of_order_for_snacks = 0;
int Menu ::quantity_of_order_for_beverages = 0;
int Menu ::order_choice2 = 0;
int Menu ::order_choice = 0;
int Menu ::snacks_choice = 0;
int Menu ::beverages_choice = 0;