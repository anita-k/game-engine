#pragma once

#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HZ_BUILD_DLL
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#else
    #error Hazel only supports Windows
#endif

#ifdef HZ_BUILD_DLL
    #define MACRO_PRINT std::cout << "print from dll" << std::endl;
#else
    #define MACRO_PRINT std::cout << "print from exe" << std::endl;
#endif
