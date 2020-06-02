//
//  main.cpp
//  Decorator
//
//  Created by wujun on 2020/6/1.
//  Copyright © 2020 wujun. All rights reserved.
//




#include <iostream>

#include "Beverage.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "test Decorator!!!!!\n";
    
    Coffa_1 *p_coffa_1 = new Coffa_1;
    Sugar *p_Sugar = new Sugar(p_coffa_1);
    cout<<"sugar coffer cost:"<<p_Sugar->getCost()<<endl;
    Sugar*p_doubleSugar = new Sugar(p_Sugar);
    cout<<"Double sugar coffer cost:"<<p_doubleSugar->getCost()<<endl;
    
    
    
    int a[]={1,2,3,4,5};
    int b[]={11,12,13,14,15};
    int *p = a;

    int* pArray[] = {a,b};
    cout<<*pArray[1]<<endl;
    int *pArry_a = pArray[0];
    cout<<pArry_a[4]<<endl;
    
    
    return 0;
}
