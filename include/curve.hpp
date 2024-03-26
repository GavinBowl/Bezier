#pragma once

#include <Eigen/Dense>
#include <vector>
#include "bezier.hpp"

namespace Curve {

class Curve2 {
private:
    std::vector<Eigen::Vector2d> controlPoint;
    struct Bezier::Bezier2 X = {};
    struct Bezier::Bezier2 Y = {};
public:
    Curve2(const std::vector<Eigen::Vector2d> &controlPoint):controlPoint(controlPoint) {
        for (int i=0;i<controlPoint.size();++i) {
            X.w[i] = controlPoint[i].x();
            Y.w[i] = controlPoint[i].y();
        }
    }
    double getXValue(double t) {
        return X(t);
    }
    double getYValue(double t) {
        return Y(t);
    }
};

class Curve3 {
// private:
public:
    std::vector<Eigen::Vector2d> controlPoint;
    struct Bezier::Bezier3 X = {};
    struct Bezier::Bezier3 Y = {};
public:
    Curve3(const std::vector<Eigen::Vector2d> &controlPoint):controlPoint(controlPoint) {
        for (int i=0;i<controlPoint.size();++i) {
            X.w[i] = controlPoint[i].x();
            Y.w[i] = controlPoint[i].y();
        }
    }
    double getXValue(double t) {
        return X(t);
    }
    double getYValue(double t) {
        return Y(t);
    }
};


}