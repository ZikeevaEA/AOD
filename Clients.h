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
        // id �������
      void setIdClient(int id)
        {
            id_client = id;
        }
        // ��������� id
        int getIdClient()
        {
            return id_client;
        }
        // ��� �������
        void setName(string client_name)
        {
            name = client_name;
        }
        // ������� �����
        string getName()
        {
            return name;
        }
        // ������� �������
        void setLastName(string client_last_name)
        {
            last_name = client_last_name;
        }
        // ������� �������
        string getLastName()
        {
            return last_name;
        }
        //�������
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
        // ���
        string name;
        // �������
        string last_name;

};
#endif
