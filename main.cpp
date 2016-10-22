#include <iostream>
#include "Clients.h"
#include "Product.h"
#include "VipClients.h"

#ifndef STRING
#define STRING
#include <string>
#endif // STRING

int main()
{
    // Создание объекта класса Client
    Clients Client;
    int id_client;

    std::cout << "client id " ;
    std::cin >> id_client;

    Client.set_id_client(id_client);

    std::string name;
    std::string last_name;

    // Ввод имени
    std::cout << "Name: ";
    std::cin>>name;

    // Ввод фамилии
    std::cout << "Last name: ";

    std::cin>>last_name;

    // Сохранение ФИ в объект класса Clients
    Client.set_name(name);
	Client.set_last_name(last_name);

    std::string phone;
    std::cout << "Phone " << ": ";
    std::cin >> phone;
    Client.set_phone(phone);

	// Выводим данные по клиенту
    std::cout << "\nClient name: " << Client.get_name() << "\n last name: "
         << Client.get_last_name() << "\n phone: "
         << Client.get_phone()<<"\n ************************** \n";

    //*******************************************************
    Products product;

    int id_product;
    std::cout << "product id " ;
    std::cin >> id_product;

    product.set_id_product(id_product);

    std::string name_product;
    // Ввод имени
    std::cout << "Name: ";
    std::cin>>name_product;
    product.set_product_name(name_product);
    float cost;
    std::cout << "Cost " ;
    std::cin >> cost;
    product.set_cost(cost);

    std::cout << "\nProduct name: " << product.get_product_name() << "\n price: "
    << product.get_cost()<<"\n ************************** \n";

//********************************************************************
    VipClients VipClient;

    std::cout << "client id " ;
    std::cin >> id_client;

    VipClient.set_id_client(id_client);

    // Ввод имени
    std::cout << "Name: ";
    std::cin>>name;

    // Ввод фамилии
    std::cout << "Last name: ";
    std::cin>>last_name;

    // Сохранение ФИ в объект класса Clients
    VipClient.set_name(name);
	VipClient.set_last_name(last_name);

    std::cout << "Phone:";
    std::cin >> phone;
    VipClient.set_phone(phone);

    int discount;
    std::cout << "Discount: %" ;
    std::cin >> discount;
    VipClient.set_discount(discount);
    VipClient.apply_discount(&cost);
     std::cout  << "\nVipClient name: " << VipClient.get_name()
                << "\n last name: " << VipClient.get_last_name()
                << "\n phone: "  << VipClient.get_phone()
                << "\nDiscount:" << VipClient.get_discount()
                << "\n Price for product with discount: " << cost
                <<"\n ************************** \n";

    return 0;
}
