#ifndef VIPCLIENTS_H_INCLUDED
#define VIPCLIENTS_H_INCLUDED
#include "Clients.h"

#include <string>

class VipClient : public Client {
    public:
        VipClient(): Client()
        {
            discount=0;
        }

        VipClient(int id_client, string phone, string name, string last_name, int discount): Client(id_client, phone, name, last_name)
        {
            this -> discount = discount;
        }


        void setDiscount(int discount_client)
        {
            discount = discount_client;
        }
        int getDiscount()
        {
            return discount;
        }
        void applyDiscount(float* a_price)
        {
            *a_price = *a_price - (*a_price * (discount / 100.0));
        }

        string getVipClientInfo()
        {
            std::stringstream out_str;
            out_str << "id VipClient: " << id_client << "\n"
                    << "Last Name: " << last_name << "\n"
                    << "Name: " << name << "\n"
                    << "Phone: " << phone << "\n"
                    << "Discount: " << discount << "\n";

            return out_str.str();
        }

    private:
        int discount;

};
#endif // VIPCLIENTS_H_INCLUDED
