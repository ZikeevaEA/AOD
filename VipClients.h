#ifndef VIPCLIENTS_H_INCLUDED
#define VIPCLIENTS_H_INCLUDED
#endif // VIPCLIENTS_H_INCLUDED
#include "Clients.h"

#ifndef STRING
#define STRING
#include <string>
#endif // STRING

class VipClients : public Clients {
    public:
        VipClients():Clients()
        {
            discount=0;
        }
        void set_discount(int discount_client)
        {
            discount=discount_client;
        }
        int get_discount()
        {
            return discount;
        }
        void apply_discount(float* a_price)
        {
            *a_price = *a_price - (*a_price * (discount/100.0));
        }

    private:
        int discount;

};
