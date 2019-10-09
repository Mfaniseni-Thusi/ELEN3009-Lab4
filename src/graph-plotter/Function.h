#ifndef FUNCTION_H
#define FUNCTION_H

class Function  // Classes' interface
{
    public:
        virtual float evaluate(float x) const = 0;
};
#endif