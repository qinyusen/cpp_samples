#include <iostream>
#include "params.h"


int main(){
    Params::params p;
    printf ("%f, %f ,%f\n", p.p1_0, Params::p1_1,Params::p1_2);

    printf("the float value is %f\n",p.p1);
    printf("the p.p1 address value is %d\n",&p.p1);
    p.init(0);
    printf("the float value is %f\n",*p.p1);

    p.init(1);
    printf("the p.p1 addr ref value is %d\n",&p.p1);
    printf("the p.p1 addr value is %d\n",p.p1);
    printf("the p.p1 value is %f\n",p.p1);
    printf("the float value is %f\n",*p.p1);
}
