#include <iostream>
#include "TestedClass.h"

int main(){
    TestedClass *obj = new TestedClass();
    std::cout << "Created new TestedClass object, i = " << obj->getI() << std::endl;
    delete obj;

std::cout << "nic";
}