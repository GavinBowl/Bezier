#pragma once

#include <vector>

namespace Bezier {

//=============Bezier==============
// polynomial's frequency = 2
struct Bezier2{
    double operator()(double t) {
        // TODO: check 0<t<1
        // TODO: check w.size()==3
        double a = (1-t);
        double b = t;
        return w[0]*a*a + w[1]*2*a*b + w[2]*b*b;
    }

    std::vector<double> w = {1, 1, 1};
    int frequency = 2;
};

// polynomial's frequency = 3
struct Bezier3{
    double operator()(double t) {
        // TODO: check 0<t<1
        // TODO: check w.size()==4
        double a = (1-t);
        double b = t;
        return w[0]*a*a*a + w[1]*3*a*a*b + w[2]*3*a*b*b + w[3]*b*b*b;
    }

    std::vector<double> w = {1, 1, 1, 1};
    int frequency = 3;
};

//=========Rational Bezier===========

struct RationalBezier2{
    double operator()(double t,const std::vector<double>& w,const std::vector<double>& r) {
        // TODO: check 0<t<1
        // TODO: check w.size()==3
        // TODO: check r.size()==3
        double a = (1-t);
        double b = t;
        return (w[0]*r[0]*a*a + w[1]*r[1]*2*a*b + w[2]*r[2]*b*b) / (r[0]*a*a + r[1]*2*a*b + r[2]*b*b);
    }

    int frequency = 2;
};

struct RationalBezier3{
    double operator()(double t,const std::vector<double>& w,const std::vector<double>& r) {
        // TODO: check 0<t<1
        // TODO: check w.size()==4
        // TODO: check r.size()==4
        double a = (1-t);
        double b = t;
        return (w[0]*r[0]*a*a*a + w[1]*r[1]*3*a*a*b + w[2]*r[2]*3*a*b*b + w[3]*r[3]*b*b*b) / (r[0]*a*a*a + r[1]*3*a*a*b + r[2]*3*a*b*b + r[3]*b*b*b);
    }

    int frequency = 3;
};


}