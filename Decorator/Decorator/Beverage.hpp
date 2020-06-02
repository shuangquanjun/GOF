//
//  Beverage.hpp
//  Decorator
//
//  Created by wujun on 2020/6/1.
//  Copyright © 2020 wujun. All rights reserved.
//

#ifndef Beverage_hpp
#define Beverage_hpp

#include <stdio.h>

class Beverage{
public:
    virtual double getCost() = 0;
    virtual ~Beverage(){}
    
};


class Coffa_1:public Beverage{
public:
    double getCost(){
        return 1.0;
    }
};

class Coffa_2:public Beverage{
public:
    double getCost(){
        return 2.0;
    }
};

class Coffa_3:public Beverage{
public:
    double getCost(){
        return 3.0;
    }
};

class CoffeDectorator: public Beverage{
protected:
    Beverage *mBeverage;
public:
    CoffeDectorator(Beverage *pBeverage){
        mBeverage = pBeverage;
    }
    double getCost(){
        return 0.0;
    }
};

class Sugar:public CoffeDectorator{
public:
    Sugar(Beverage *pBeverage):CoffeDectorator(pBeverage){}
    double getCost(){
        return 10.0 +mBeverage->getCost();
    }
};

class Milk:public CoffeDectorator{
public:
    Milk(Beverage *pBerverage):CoffeDectorator(pBerverage){
        
    }
    
    double getCost(){
        return 20 + mBeverage->getCost();
    }
    
    
};


#endif /* Beverage_hpp */
