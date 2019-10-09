#ifndef ABSOLUTEVALUE_H
#define ABSOLUTEVALUE_H

#include "Function.h"
#include <memory>
using namespace std;

class AbsoluteValue: public Function
{
public:
    AbsoluteValue(shared_ptr<Function> function): function_{function}
    {}
    virtual float evaluate(float x) const override;
private:
    shared_ptr<Function> function_; 
};

#endif
