//
//  main.cpp
//  AddingCPP
//
//  Created by Gerald Jones on 5/4/25.
//

#include <iostream>
#include <Metal/Metal.hpp>

using namespace std;

int main(int argc, const char * argv[]) {
   
    MTL::Device* device = MTL::CreateSystemDefaultDevice();
    
    cout << "Hello, World from Metal-CPP!\n";
    cout << "Metal device name: " << device->name()->utf8String() << endl;
    
    return 0;
}
