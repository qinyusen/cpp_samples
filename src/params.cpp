#include "params.h"

namespace Params {
const std::string params::s1_1 = "hello";
const std::string params::s1_2 = "world";


params::params(){
    init(1);
}
params::~params(){}

int params::init(int type){
    if (type == 0){
        p1 = &p1_1;
        printf("this part is for init with 0 \n\n");
        printf("p1_1 is %f \n",p1_1);
        printf("p1 is %f \n",p1);

        s = const_cast<std::string *>(&s1_1);
        printf("the s is %s\n", s->c_str());
    } else {
        p1 = &p1_2;
        printf("this part is for init with 1 and others \n\n");
        printf("p1 addr ref valuse is %d\n",&p1);
        printf("p1_2 is %f \n",p1_2);
        printf("p1 is %d \n",p1);
        printf("p1 is %f \n",p1);
        printf("p1 is %f \n",*p1);

        s = const_cast<std::string *>(&s1_2);
        printf("the s is %s\n", s->c_str());
    }
    return 0;
}

}
