//
//  main.cpp
//  AddingCPP
//
//  Created by Gerald Jones on 5/4/25.
//

#include <iostream>
#include <Metal/Metal.hpp>
#include "mtl_engine.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
   
    MTLEngine engine;
    engine.init();
    engine.run();
    engine.cleanup();
    
    
    return 0;
}
