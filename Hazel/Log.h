#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory>
#include <iostream>

namespace Hazel
{
    class Log
    {
    public:
        static HAZEL_API void Init();
        inline HAZEL_API static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline HAZEL_API static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static HAZEL_API std::shared_ptr<spdlog::logger> s_CoreLogger;
        static HAZEL_API std::shared_ptr<spdlog::logger> s_ClientLogger;

    };
}

//Core log macros
#define HZ_CORE_ERROR(...)   ::Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_WARN(...)    ::Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_INFO(...)    ::Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_TRACE(...)   ::Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_CRITICAL(...)   ::Hazel::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define HZ_ERROR(...)   ::Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_WARN(...)    ::Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_INFO(...)    ::Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_TRACE(...)   ::Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_CRITICAL(...)   ::Hazel::Log::GetClientLogger()->critical(__VA_ARGS__)

//if dist build
//#define HZ_CORE_INFO