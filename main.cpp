#include <vector>
#include <Eigen/Dense>
#include <spdlog/spdlog.h>

#include "utils.hpp"
#include "curve.hpp"

int main() {
    Eigen::Vector2d p0 = Eigen::Vector2d(110,150);
    Eigen::Vector2d p1 = Eigen::Vector2d(25,190);
    Eigen::Vector2d p2 = Eigen::Vector2d(210,250);
    Eigen::Vector2d p3 = Eigen::Vector2d(210,30);
    std::vector<Eigen::Vector2d> controlPoint = {p0, p1, p2, p3};

    Curve::Curve3 curve(controlPoint);
    
    // computed by parametric equations
    int segmentCount = 2;
    std::vector<Eigen::Vector2d> coordinates = Utils::flattenCurve(curve,segmentCount);
    Eigen::Vector2d res1 = coordinates[1];
    
    SPDLOG_INFO("res1: ({}, {})",res1.x(),res1.y());

    // compute by geometry relationship
    double t = 1.0 / segmentCount;
    Eigen::Vector2d res2;
    res2 = Utils::deCasteljau(controlPoint,t);
    
    SPDLOG_INFO("res2: ({}, {})",res2.x(),res2.y());
}