#include "params.h"

namespace Params {
const std::string s1_1 = "hello";    
const std::string s1_2 = "world";


params::params(){
    init(1);
}
params::~params(){}

int params::init(int type){
    if (type == 0){
        printf("p1_1 is %f \n",p1_1);
        printf("p1 is %f \n",p1);
    } else {
        p1 = &p1_2;
        printf("p1 addr ref valuse is %d\n",&p1);
        printf("p1_2 is %f \n",p1_2);
        printf("p1 is %d \n",p1);
        printf("p1 is %f \n",p1);
        printf("p1 is %f \n",*p1);
    }
    return 0;
}

}
