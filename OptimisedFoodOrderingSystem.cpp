#include <iostream>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <unistd.h>
#include <windows.h>
using namespace std;
class shop{
public:
    string shop_name[9] = {"YURISH        ", "EMO PIZZA     ", "SUBWAY        ", "BLISS         ", "CAKE CASTLE   ", "BUTTY'S       ", "ANDHRA TIFFINS", "AMUL PARLOUR  ", "LATHA SUPER MARKET"};
    string yurish[9] = {"Apple juice(Rs.40)     ", "Mango juice(Rs.45)     ", "Lemon juice(Rs.35)     ", "Watermelon juice(Rs.40)", "Mixed Fruits(Rs.50)    ", "Coconut water(Rs.40)   ", "Kitkat Shake(Rs.60)   ", "Chocolate Shake(Rs.60)", "Oreo Shake(Rs.50)       "};
    int yurishp[9] = {40, 45, 35, 40, 50, 40, 60, 60, 50};
    string emopizza[9] = {"Veggie Supreme(Rs.480)", "Exotica Pizza(Rs.440)   ", "Chicken Sizzler(Rs.580)", "Chrispy Chicken (Rs.520)", "Spaghetti (Rs.350)     ", "Country Feast (Rs.400)", "Tetrazzini (Rs.420)", "Double Cheese (Rs.540)", "Makizushi (Rs.548)     "};
    int emopizzap[9] = {480, 440, 580, 520, 350, 400, 450, 540, 550};
    string subway[9] = {"Aloo Patty(Rs.160)    ", "Paneer Tikka(Rs.170) ", "Chicken Tikka(Rs.175) ", "Chicken Tandoori(Rs.180)", "Turkey Breast(Rs.195)", "Chicken Tariyaki(Rs.200)", "Veggie Delight(Rs.140)", "Tuna(Rs.210)         ", "Veggie Patty(Rs.148)   "};
    int subwayp[9] = {160, 170, 175, 180, 195, 200, 240, 210, 150};
    string bliss[9] = {"ChickenDum Biryani(Rs.120)", "Lolipop Biryani(Rs.120)", "Veg Biriyani(Rs.70)", "Paneer Biriyani(Rs.90)", "Chicken noodles(Rs.80)", "Paneer noodles(Rs.80)", "Chicken 65(Rs.90)     ", "Gobi 65 (Rs.80)     ", "paneer 65(Rs.80)     "};
    int blissp[9] = {120, 120, 70, 90, 80, 80, 90, 80, 80};
    string cakecastle[9] = {"Veg Puff(Rs.15)     ", "Chicken Puff(Rs.25)", "Black Forest PastryRs.55)", "Cup Cake(Rs.55)     ", "Red Velvet Pastry(Rs.75)", "Rainbow Roll Pastry(Rs.50)", "Brownie icecream(Rs.110)", "White Forest Pastry(Rs.60)", "Choco Mousse Cup (Rs.50)"};
    int cakecastlep[9] = {15, 25, 55, 55, 75, 50, 110, 60, 50};
    string butty[9] = {"Chicken Biriyani(Rs.100)", "Lollipop Biriyani(Rs.130)", "Veg Biriyani (Rs.80)", "Paneer Biriyani(Rs.90)", "Chicken noodles(Rs.90)", "Paneer noodles(Rs.80)", "Chicken Roll (Rs.60)", "Shawarma roll (Rs.90)", "Paneer roll (Rs.60)"};
    int buttyp[9] = {100, 130, 80, 90, 90, 80, 60, 90, 60};
    string andhratiffin[9] = {"Plain Dosa(Rs.30)   ", "Karam Dosa(Rs.40)     ", "Egg Dosa(Rs.40)    ", "Ghee Dosa(Rs.50)   ", "Chicken Dosa(Rs.60)", "Onion Uttapam(Rs.40)", "Mirchi Bajji(Rs.30)", "Egg Bajji(Rs.30)    ", "Onion Bajji(Rs.30)    "};
    int andhratiffinp[9] = {30, 40, 40, 50, 60, 40, 30, 50, 30};
    string amulparlour[9] = {"Coffee(Rs.15)       ", "Tea(Rs.15)         ", "Lemon tea(Rs.10)    ", "Boost(Rs.20)        ", "Badam Milk(Rs.20)    ", "Cookies & Icecream(Rs.50)", "Chocochip IceCream(Rs.40)", "Almond IceCream(Rs.60)", "Pudding Cake(Rs.25)"};
    int amulparlourp[9] = {15, 15, 10, 20, 20, 50, 40, 60, 25};
    string lathasupermarket[9] = {"Pepsi(Rs.20)        ", "Milk Biki's(Rs.10)   ", "Lays (Rs.20)        ", "Britannia cake(Rs.20)", "Max Protein(Rs.150)", "Munch Max (Rs.20)     ", "Diary Milk Silk(Rs.50)", "Oreo ice cream (Rs.70)", "Orbit (Rs.5)        "};
    int lathasupermarketp[9] = {20, 10, 20, 20, 150, 20, 50, 70, 5};
    void displayshops(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << shop_name[i] << "\t\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displayyurish(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << yurish[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displayemopizza(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << emopizza[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displaysubway(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << subway[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displaybliss(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << bliss[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displaycakecastle(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << cakecastle[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displaybutty(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << butty[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displayandhratiffin(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << andhratiffin[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displayamulparlour(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << amulparlour[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displaylathasupermarket(){
        for (int i = 0; i < 9; i++){
            cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t\t\t\t   " << i + 1 << "-" << lathasupermarket[i] << "\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3" << endl;
        }
    }
    void displayrecipt(int total){
        system("cls");
        cout << "\n\t\t\t\t ================================================" << endl;
        cout << "\t\t\t\t|               Food Ordering System             |" << endl;
        cout << "\t\t\t\t ================================================" << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t  Bill No : CP51           Order : NB1353" << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t  Cashier :  HABIBI" << endl;
        cout << endl;
        cout << "\t\t\t\t\t    YOUR TOTAL BILL IS Rs." << total << endl;
        cout << "\n\t\t\t\t ================================================" << endl;
    }
    void displaygenbill(){
        cout << "\n\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
        for (int loop = 1; loop < 8; loop++){
            Sleep(500);
            cout << "...";
        }
        cout << "\n\t\t\t\t";
        system("PAUSE");
    }
    void displayiteminshop(){
        cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t =========================== ITEMS IN SHOP ===========================  \t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    }
    void displayselectitem(){
        cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t  =============== please select items no. from the menu ===============\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    }
};
class owner : public shop{
private:
    int item, x, ch, price, a, c, d, e, f, g, h, i, j, k, l;
    string y, ye, newi;
public:
    void shopfoodowner(){
        cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t =========================== SHOPS IN JAVA ===========================  \t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    a:
        displayshops();
    c:
        cout << "\n\n\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t ============================ 1-VISIT SHOPS ============================  \t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
        cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t =================== 2-UPDATE EXISTING ITEM FROM SHOPS ==================  \t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
        cout << "\n\n\t PLEASE ENTER OPERATION NO. WHICH YOU WANNA PERFORM: ";
        cin >> x;
        if (x == 1){
            cout << "\n\n\t PLEASE ENTER SHOP NO. WHICH YOU WANNA VISIT (one SHOP at a time): ";
            cin >> ch;
            switch (ch){
            case 1:
                displayiteminshop();
                displayyurish();
                break;
            case 2:
                displayiteminshop();
                displayemopizza();
                break;
            case 3:
                displayiteminshop();
                displaysubway();
                break;
            case 4:
                displayiteminshop();
                displaybliss();
                break;
            case 5:
                displayiteminshop();
                displaycakecastle();
                break;
            case 6:
                displayiteminshop();
                displaybutty();
                break;
            case 7:
                displayiteminshop();
                displayandhratiffin();
                break;
            case 8:
                displayiteminshop();
                displayamulparlour();
                break;
            case 9:
                displayiteminshop();
                displaylathasupermarket();
                break;
            default:
                cout << "\n\n\t\t\t\tYOU ENTERED WRONG KEY !!!" << endl;
                goto c;
            }
        }
        else if (x == 2){
            cout << "\n\n\t PLEASE ENTER SHOP NO. WHOSE ITEM YOU WANNA UPDATE (one SHOP at a time): ";
            cin >> ch;
            switch (ch){
            case 1:
                displayiteminshop();
                displayyurish();
            d:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                yurish[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                yurishp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto d;
                }
                break;
            case 2:
                displayiteminshop();
                displayemopizza();
            e:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                emopizza[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                emopizzap[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto e;
                }
                break;
            case 3:
                displayiteminshop();
                displaysubway();
            f:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                subway[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                subwayp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto f;
                }
                break;
            case 4:
                displayiteminshop();
                displaybliss();
            g:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                bliss[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                blissp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto g;
                }
                break;
            case 5:
                displayiteminshop();
                displaycakecastle();
            h:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                cakecastle[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                cakecastlep[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto h;
                }
                break;
            case 6:
                displayiteminshop();
                displaybutty();
            i:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                butty[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                buttyp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto i;
                }
                break;
            case 7:
                displayiteminshop();
                displayandhratiffin();
            j:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                andhratiffin[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                andhratiffinp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto j;
                }
                break;
            case 8:
                displayiteminshop();
                displayamulparlour();
            k:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                amulparlour[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                amulparlourp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto k;
                }
                break;
            case 9:
                displayiteminshop();
                displaylathasupermarket();
            l:
                cout << "\n\n\t WHICH EXISTING ITEM NO. YOU WANNA UPDATE: ";
                cin >> item;
                cout << "\n\n\t ENTER NEW ITEM: ";
                cin >> newi;
                lathasupermarket[item - 1] = newi;
                cout << "\n\n\t ENTER PRICE OF THIS ITEM: ";
                cin >> price;
                lathasupermarketp[item - 1] = price;
                cout << "\n\t DO YOU WANT TO UPDATE ANOTHER ITEM(y/n):";
                cin >> y;
                if (y == "y" || y == "Y"){
                    goto l;
                }
                break;
            default:
                cout << "\n\n\t\t\t\tYOU ENTERED WRONG KEY !!!" << endl;
                goto c;
            }
        }
        cout << "\n\t DO YOU WANT TO PERFORM ANOTHER OPERATION(yes/no):";
        cin >> ye;
        if (ye == "yes" || ye == "YES"){
            system("CLS");
            goto a;
        }
        else{
            cout << "\n\t\t\t\tTHANK YOU FOR YOUR VISITING JAVA ";
            for (int loop = 1; loop < 8; loop++){
                Sleep(500);
                cout << "...";
            }
            cout << "\n\t\t\t\t";
            system("PAUSE");
        }
    }
};
class orderfood : private shop{
private:
    int ch, a, b, c;
    string y, ye;

protected:
    void shopfoodorder(){
        cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t  ================== WELCOME TO FOOD ORDERING SYSTEM ==================\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
        cout << "\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB\t  ========================= ENTER SHOP NO. ============================\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
        displayshops();
    a:
    b:
    c:
        cout << "\n\n\tSELECT YOUR DESIRED SHOP (one SHOP at a time): ";
        cin >> ch;
        cout << "\n\n\tDO YOU WANT TO CHANGE YOUR DECISION (y/n) :";
        cin >> ye;
        if (ye == "y" || ye == "Y"){
            goto b;
        }
        else{
            if (ch == 1){
                displayselectitem();
                displayyurish();
                int quantity, order, a1, b1, c1, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a1:
            b1:
            c1:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b1;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + yurishp[order - 1] * quantity;
                    write << "you ordered " << yurish[order - 1] << " Rs." << yurishp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << yurish[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c1;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a1;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 2){
                displayselectitem();
                displayemopizza();
                int quantity, order, a2, b2, c2, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a2:
            b2:
            c2:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b2;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + emopizzap[order - 1] * quantity;
                    write << "you ordered " << emopizza[order - 1] << " Rs." << emopizzap[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << emopizza[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c2;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a2;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 3){
                displayselectitem();
                displaysubway();
                int quantity, order, a3, b3, c3, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a3:
            b3:
            c3:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b3;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + subwayp[order - 1] * quantity;
                    write << "you ordered " << subway[order - 1] << " Rs." << subwayp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << subway[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c3;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a3;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 4){
                displayselectitem();
                displaybliss();
                int quantity, order, a4, b4, c4, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a4:
            b4:
            c4:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b4;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + blissp[order - 1] * quantity;
                    write << "you ordered " << bliss[order - 1] << " Rs." << blissp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << bliss[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c4;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a4;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 5){
                displayselectitem();
                displaycakecastle();
                int quantity, order, a5, b5, c5, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a5:
            b5:
            c5:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b5;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + cakecastlep[order - 1] * quantity;
                    write << "you ordered " << cakecastle[order - 1] << " Rs." << cakecastlep[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << cakecastle[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c5;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a5;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 6){
                displayselectitem();
                displaybutty();
                int quantity, order, a6, b6, c6, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a6:
            b6:
            c6:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b6;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + buttyp[order - 1] * quantity;
                    write << "you ordered " << butty[order - 1] << " Rs." << buttyp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << butty[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c6;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a6;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 7){
                displayselectitem();
                displayandhratiffin();
                int quantity, order, a7, b7, c7, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a7:
            b7:
            c7:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b7;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + andhratiffinp[order - 1] * quantity;
                    write << "you ordered " << andhratiffin[order - 1] << " Rs." << andhratiffinp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << andhratiffin[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c7;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a7;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 8){
                displayselectitem();
                displayamulparlour();
                int quantity, order, a8, b8, c8, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a8:
            b8:
            c8:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b8;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + amulparlourp[order - 1] * quantity;
                    write << "you ordered " << amulparlour[order - 1] << " Rs." << amulparlourp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << amulparlour[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c8;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a8;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else if (ch == 9){
                displayselectitem();
                displaylathasupermarket();
                int quantity, order, a9, b9, c9, total = 0;
                string y1, ye1;
                ofstream write;
                write.open("order.text");
                if (!write){
                    cout << "file can not open" << endl;
                    exit(-1);
                }
            a9:
            b9:
            c9:
                cout << "\n\n\t ENTER YOUR ORDER (one ORDER at a time):";
                cin >> order;
                cout << "\n\n\t Do you want to change your order (y/n):";
                cin >> ye1;
                if (ye1 == "y" || ye1 == "Y"){
                    goto b9;
                }
                else{
                    cout << "\n\n\t Enter the Quantity:";
                    cin >> quantity;
                    total = total + lathasupermarketp[order - 1] * quantity;
                    write << "you ordered " << lathasupermarket[order - 1] << " Rs." << lathasupermarketp[order - 1];
                    write << "\n";
                    write << "Quantity:" << quantity;
                    write << "\n";
                    cout << "\n\n\n\t You Ordered " << lathasupermarket[order - 1] << endl;
                    cout << "\t your order successfully saved" << endl;
                    if (order > 9 || order < 1){
                        goto c9;
                    }
                    cout << "\n\t Do You Want Another Order(yes/no):";
                    cin >> y1;
                    if (y1 == "yes" || y1 == "YES"){
                        goto a9;
                    }
                    else{
                        displaygenbill();
                    }
                    displayrecipt(total);
                    write << "\t\t\t\t ";
                    write << "\t\t\t\tTOTAL BILL IS : " << total;
                    write.close();
                }
            }
            else{
                cout << "\n\n\t\t\t\tYOU ENTERED WRONG KEY !!!" << endl;
                goto c;
            }
            cout << "\n\t Do You Want to visit Another shop(yes/no):";
            cin >> y;
            if (y == "yes" || y == "YES"){
                system("CLS");
                displayshops();
                goto a;
            }
            else{
                cout << "\n\t\t\t\tTHANK YOU FOR YOUR visiting java ";
                for (int loop = 1; loop < 8; loop++){
                    Sleep(500);
                    cout << "...";
                }
                cout << "\n\t\t\t\t";
                system("PAUSE");
            }
        }
    }
};
class ownerlogin : private owner{
private:
    int lebel1, lebel2, lebel3;
public:
    void ownlogin(){
        long userId; // for user id of administrator
    lebel1:// system("cls");
        cout << "\n\n\n\n\t\t---------------------";
        cout << "\n\t\tEnter Login Id = ";
        cin >> userId;
        cout << "\t\t---------------------";
        if (userId != 12345){
            cout << "\n\t\tDon't try to be smart.....Enter correct id\n";
            goto lebel1;
        }
        else
            cout << "\n\n\t\twelcome to java green,\n";
    lebel2:
        string pwd = "abcd"; // password
        string pass = "";    // empty string
        char c;
        cout << "\n\n\t\tPassword = ";
    lebel3:
        c = getch();
        cout << "*"; // for printing * instead for password
        if (c != 13){
            pass = pass + c; // for concatenating the string
            goto lebel3;
        }{
            if (pass == pwd){
                cout << "\n\n\t\tAccess Granted. Welcome to our system\n\n\n\t\t";
                system("PAUSE");
                system("CLS");
                shopfoodowner();
            }
            else{
                cout << "\n\t\tWrong Password\n";
                goto lebel2;
            }
        }
    }
};
class customerlogin : private orderfood{
private:
    int lebel1, lebel2, lebel3;
public:
    void cuslogin(){
        long userId; // for user id of administrator
    lebel1:// system("cls");
        cout << "\n\n\n\n\t\t---------------------";
        cout << "\n\t\tEnter Login Id = ";
        cin >> userId;
        cout << "\t\t---------------------";
        if (userId != 67890){
            cout << "\n\t\tDon't try to be smart.....Enter correct id\n";
            goto lebel1;
        }
        else
            cout << "\n\n\t\twelcome to java green,\n";
    lebel2:
        string pwd = "abcd"; // password
        string pass = "";    // empty string
        char c;
        cout << "\n\n\t\tPassword = ";
    lebel3:
        c = getch();
        cout << "*"; // for printing * instead for password
        if (c != 13){
            pass = pass + c; // for concatenating the string
            goto lebel3;
        }{
            if (pass == pwd){
                cout << "\n\n\t\tAccess Granted. Welcome to our system\n\n\n\t\t";
                system("PAUSE");
                system("CLS");
                shopfoodorder();
            }
            else{
                cout << "\n\t\tWrong Password\n";
                goto lebel2;
            }
        }
    }
};
int main(){
    int x, xx;
    ownerlogin ownob;
    customerlogin cusob;
xx:
    cout << "\t\t----------------------------------------------------------------\n";
    cout << "\t\t----------------------------------------------------------------\n";
    cout << "\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB \t\t ONLINE JAVA  \t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    cout << "\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB \xB10 > Press 1 for Owner login \t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    cout << "\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB \xB10 > Press 2 for Customer login \t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    cout << "\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB \xB10 > Press 3 for Exit \t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
    cout << "\t\t----------------------------------------------------------------\n";
    cout << "\t\t----------------------------------------------------------------\n\t\t-->";
    cin >> x;
    if (x == 1){
        ownob.ownlogin();
    }
    else if (x == 2){
        cusob.cuslogin();
    }
    else if (x == 3){
        cout << "\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB \xB10 > Thank you for visiting Java Online \t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n";
        cout << "\t\t----------------------------------------------------------------\n";
        cout << "\t\t----------------------------------------------------------------\n\n\n\n";
        return 0;
    }
    else{
        cout << "\t\t\xB3\xB3\xDB\xDB\xDB\xDB\xDB\xDB \xB10 > wrong input \t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xB3\xB3\n\n";
        goto xx;
    }
    getch();
    return 0;
}
