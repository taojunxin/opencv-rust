#!/bin/bash

set -vex

#brew unlink python@2
brew install llvm pkg-config

mkdir -p ~/build/opencv

#Executing: ['cmake', '-GXcode', '-DAPPLE_FRAMEWORK=ON', '-DCMAKE_INSTALL_PREFIX=install', '-DCMAKE_BUILD_TYPE=Release', '-DOPENCV_INCLUDE_INSTALL_PATH=include', '-DOPENCV_3P_LIB_INSTALL_PATH=lib/3rdparty', '-DOPENCV_ENABLE_NONFREE=ON', '/Users/runner/build/opencv/opencv-4.2.0', '-DOPENCV_EXTRA_MODULES_PATH=/Users/runner/build/opencv/opencv_contrib-4.2.0/modules'] in /Users/runner/build/opencv/opencv-4.2.0-build/build/build-x86_64-macosx

wget -q -O- "https://github.com/opencv/opencv/archive/$OPENCV_VERSION.tar.gz" | tar -xzC ~/build/opencv
wget -q -O- "https://github.com/opencv/opencv_contrib/archive/$OPENCV_VERSION.tar.gz" | tar -xzC ~/build/opencv

mkdir -p ~/"build/opencv/opencv-$OPENCV_VERSION-build"

python ~/"build/opencv/opencv-$OPENCV_VERSION/platforms/osx/build_framework.py" \
	--contrib ~/"build/opencv/opencv_contrib-$OPENCV_VERSION" \
	--enable_nonfree \
	~/"build/opencv/opencv-$OPENCV_VERSION-build"

ls -laR ~/"build/opencv/opencv-$OPENCV_VERSION-build"
cat ~/"build/opencv/opencv-$OPENCV_VERSION-build/opencv2.framework/Versions/A/Headers/core/version.hpp"
