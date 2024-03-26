#include <iostream>
#include <Eigen/Dense>
#include "utils.hpp"

namespace Utils {


Eigen::Vector2d deCasteljau(const std::vector<Eigen::Vector2d>& points,double t) {
    std::cout << "[in deCasteljau]" << std::endl;

    for (const auto& p:points) {
        std::cout << p.x() << "," << p.y() << " ";
    }
    std::cout << std::endl;

    if (points.size()==1) {
        return points[0];
    }

    std::vector<Eigen::Vector2d> newPoints(points.size()-1);
    for (int i=0;i<newPoints.size();++i) {
        double x = (1-t) * points[i].x() + t * points[i+1].x();
        double y = (1-t) * points[i].y() + t * points[i+1].y();
        newPoints[i] = Eigen::Vector2d(x,y);
    }
    deCasteljau(newPoints,t);
}

// TODO: be a member function of Curve
std::vector<Eigen::Vector2d> flattenCurve(Curve::Curve3 curve,int segmentCount) {
    double step = 1.0 / segmentCount;
    std::vector<Eigen::Vector2d> coordinates = {Eigen::Vector2d(curve.getXValue(0),curve.getYValue(0))};

    for (int i=1;i<=segmentCount;++i) {
        double t = i * step;
        Eigen::Vector2d pos = Eigen::Vector2d(curve.getXValue(t),curve.getYValue(t));
        coordinates.emplace_back(pos);
    }
    return coordinates;
}



}