//
//  MetalHeaders.h
//  Pods
//
//  Created by Dmitry Gulyagin on 20.07.2021.
//

#ifndef MetalHeaders_h
#define MetalHeaders_h

#ifdef __METAL_VERSION__
#define NS_ENUM(_type, _name) enum _name : _type _name; enum _name : _type
#define NSInteger metal::int32_t
#define CONSTANT constant
#else
#import <Foundation/Foundation.h>
#define CONSTANT const
#endif

#include <simd/simd.h>

//CONSTANT int imagesInPack = 1;

//typedef NS_ENUM(NSInteger, Metalexture) {
//    ImageProcessorTextureInput,
//    ImageProcessorTextureResult,
//};
//
//typedef NS_ENUM(NSInteger, ImageProcessorBuffer) {
//    ImageProcessorBufferUniforms,
//    ImageProcessorBufferResult,
//    ImageProcessorBufferScaleRect,
//};

struct MetalRect {
    vector_float2 origin;
    vector_float2 size;
};

#endif /* MetalHeaders_h */
