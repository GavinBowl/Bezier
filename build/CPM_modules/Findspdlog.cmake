include("/home/gavin/Bezier/cmake/CPM.cmake")
CPMAddPackage("NAME;spdlog;GIT_REPOSITORY;https://github.com/gabime/spdlog.git;GIT_TAG;v1.11.0;OPTIONS;SPDLOG_BUILD_SHARED OFF;SPDLOG_BUILD_EXAMPLE OFF;SPDLOG_FMT_EXTERNAL ON")
set(spdlog_FOUND TRUE)