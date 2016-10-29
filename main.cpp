#include <iostream>
#include "client.h"
#include "product.h"
#include "vip_client.h"
#include "list.h"

#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    LinkedList linkedlist;
    Client *client;

    int id_client;
    string name;
    string last_name;
    string phone;
    for (int i = 0; i < 3; i++)
    {
    // Создание объекта класса Client
    cout << "client id " ;
    cin >> id_client;
    // Ввод имени
    cout << "Name: ";
    cin >> name;
    // Ввод фамилии
    cout << "Last name: ";
    cin >> last_name;
    cout << "Phone " << ": ";
    cin >> phone;
    client = new Client(id_client, phone, name, last_name);
    linkedlist.add(client);
    }

    linkedlist.printList();


    //*******************************************************

    int id_product;
    cout << "product id ";
    cin >> id_product;


    string name_product;
    // Ввод имени
    cout << "Name: ";
    cin >> name_product;

    float cost;
    cout << "Cost " ;
    cin >> cost;

    Product product(id_product, name_product, cost);

    cout << "\nProduct name: " << product.getProductName() << "\n price: "
    << product.getCost() << "\n ************************** \n";

//********************************************************************

    cout << "Vip Client id " ;
    cin >> id_client;

    // Ввод имени
    cout << "Name: ";
    cin >> name;

    // Ввод фамилии
    cout << "Last name: ";
    cin >> last_name;


    cout << "Phone:";
    cin >> phone;

    int discount;
    cout << "Discount: %" ;
    cin >> discount;

    VipClient vip_client(id_client, phone, name, last_name, discount);


    vip_client.applyDiscount(&cost);
    cout  << vip_client.getVipClientInfo()
          << "Price for product with discount: " << cost <<"\n"
          << "************************** \n";
    return 0;
}
