CPMAddPackage(
        NAME "Eigen3"
        GIT_REPOSITORY "https://github.com/hexagon-geo-surv/eigen.git"
        GIT_TAG "3.4.0"
        OPTIONS
        "BUILD_TESTING OFF"
        "EIGEN_BUILD_DOC OFF"
        "EIGEN_LEAVE_TEST_IN_ALL_TARGET OFF"
        "EIGEN_BUILD_PKGCONFIG OFF"
)

CPMAddPackage(
        NAME "fmt"
        GIT_REPOSITORY "https://github.com/fmtlib/fmt.git"
        GIT_TAG "9.1.0"
)

CPMAddPackage(
        NAME "spdlog"
        GIT_REPOSITORY "https://github.com/gabime/spdlog.git"
        GIT_TAG "v1.11.0"
        OPTIONS
        "SPDLOG_BUILD_SHARED OFF"
        "SPDLOG_BUILD_EXAMPLE OFF"
        "SPDLOG_FMT_EXTERNAL ON"
)