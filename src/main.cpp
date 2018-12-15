#include <iostream>
#include "params.h"


int main(){
    Params::params p,p_1;
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

    printf("#############################\n");

    printf("the float value is %f\n",p_1.p1);
    printf("the p_1.p1 address value is %d\n",&p_1.p1);
    p_1.init(0);
    printf("the float value is %f\n",*p_1.p1);

    p_1.init(1);
    printf("the p_1.p1 addr ref value is %d\n",&p_1.p1);
    printf("the p_1.p1 addr value is %d\n",p_1.p1);
    printf("the p_1.p1 value is %f\n",p_1.p1);
    printf("the float value is %f\n",*p_1.p1);



    printf("%s\n", p.s1_1.c_str());

    //3 way to get the string
    p.s = new std::string("foo");
    printf("%s\n", p.s->c_str());
    delete(p.s);

    p.s = new std::string(p.s1_1);
    printf("%s\n", p.s->c_str());
    delete(p.s);

    //this should be the best way.
    p.s = const_cast<std::string *>(&p.s1_1);
    printf("%s\n", p.s->c_str());



}
