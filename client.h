#ifndef CLIENTS_H
#define CLIENTS_H
#include <string>
#include <sstream>

using std::string;
class Client{
    public:
        Client()
        {
            id_client = 0;
            phone = "";
            name = "";
            last_name = "";
        }
        Client(int id_client, string phone, string name, string last_name)
        {
            this -> id_client = id_client;
            this -> phone = phone;
            this -> name = name;
            this -> last_name = last_name;
        }
        // id клиента
		void setIdClient(int id)
        {
            id_client = id;
        }
        // Получение id
        int getIdClient()
        {
            return id_client;
        }
        // Имя клиента
        void setName(string client_name)
        {
            name = client_name;
        }
        // Возврат имени
        string getName()
        {
            return name;
        }
        // Фамилия клиента
        void setLastName(string client_last_name)
        {
            last_name = client_last_name;
        }
        // Возврат фамилии
        string getLastName()
        {
            return last_name;
        }
        //Телефон
        void setPhone( string client_phone)
        {
            phone = client_phone;
        }
        string getPhone()
        {
         return phone;
        }

        string getClientInfo()
        {
            std::stringstream out_str;
            out_str <<"id Client: " << id_client << "\n"
                    << "Last Name: " << last_name << "\n"
                    << "Name: " << name << "\n"
                    << "Phone: " << phone << "\n";
            return out_str.str();
        }

    protected:
        int id_client;
        string phone;
        // Имя
        string name;
        // Фамилия
        string last_name;
};
#endif
