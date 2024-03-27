#pragma once

#include <Eigen/Dense>

#include "bezier.hpp"
#include "curve.hpp"

namespace Utils {


//========Draw Bezier Curves=========

/**
 * @brief compute: control points with param t -->  a point on Bezier Curve
 * @param points vector of initial control points
 * @param t parameter value
 * @return point corresponding to param t
 */
Eigen::Vector2d deCasteljau(const std::vector<Eigen::Vector2d>& points,double t);


/**
 * @brief sampling and connect
 * @param curve Bezier Curve
 * @param segmentCount number of sampling
 * @return vector of sample points
 */
std::vector<Eigen::Vector2d> flattenCurve(Curve::Curve3 curve,int segmentCount);



}