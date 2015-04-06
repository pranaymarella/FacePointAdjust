//
//  UIImageCVMatConverter.h
//  FaceRig
//
//  Created by zhoushiwei on 14/10/24.
//  Copyright (c) 2014年 zhoushiwei. All rights reserved.
//

#ifndef __FaceRig__UIImageCVMatConverter__
#define __FaceRig__UIImageCVMatConverter__

#include <stdio.h>
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#include <opencv2/opencv.hpp>
using namespace cv;

@interface UIImageCVMatConverter : NSObject
+ (cv::Mat)cvMatFromUIImage:(UIImage *)image;
+ (UIImage *)UIImageFromCVMat:(cv::Mat)image;
+ (UIImage *)scaleAndRotateImageFrontCamera:(UIImage *)image;
+ (UIImage *)scaleAndRotateImageBackCamera:(UIImage *)image;
+(UIImage*) imageWithMat:(const cv::Mat&) image andImageOrientation: (UIImageOrientation) orientation;
+(UIImage*) imageWithMat:(const cv::Mat&) image andDeviceOrientation: (UIDeviceOrientation) orientation;
@end
#endif /* defined(__FaceRig__UIImageCVMatConverter__) */
