#include <iostream>
#include "Application.h"

#pragma once

namespace Hazel {
    Application::Application() {

    }

    Application::~Application() {

    }

    void Application::Run() {
        MACRO_PRINT
        std::cout << "Hazel is running." << std::endl;
        while (true);
    }

}