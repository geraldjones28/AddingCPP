//
//  mtl_engine.hpp
//  AddingCPP

#pragma once

#define GLFW_INCLUDE_NONE
#import <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_COCOA
#import <GLFW/glfw3native.h>

#include <Metal/Metal.hpp>
#include <Metal/Metal.h>
#include <QuartzCore/CAMetalLayer.hpp>
#include <QuartzCore/CAMetalLayer.h>
#include <QuartzCore/QuartzCore.hpp>
#include <simd/simd.h>

class MTLEngine {
public:
    void init();
    void run();
    void cleanup();
    
private:
    void initDevice();
    void initWindow();
    
    void createTriangle();
    void createDefaultLibrary();
    void createCommandQueue();
    void createRenderPipeline();
    
    void encodeRenderCommand(MTL::RenderCommandEncoder* renderEncoder);
    void sendRenderCommand();
    void draw();
    
    MTL::Device* metalDevice;
    GLFWwindow* glfwWindow;
    NSWindow* metalWindow;
    CAMetalLayer* metalLayer;
    CA:: MetalDrawable* metalDrawable;
    
    MTL::Library* metalDefaultLibrary;
    MTL::CommandQueue* metalCommandQueue;
    MTL::CommandBuffer* metalCommandBuffer;
    MTL::RenderPipelineState* metalRenderPSO;
    MTL::Buffer* triangleVertexBuffer;
};

//
//  Created by Gerald Jones on 5/4/25.
//

