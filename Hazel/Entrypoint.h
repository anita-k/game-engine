#pragma once

#ifdef HZ_PLATFORM_WINDOWS

    extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
    MACRO_PRINT
    Hazel::Log::Init();
    int a = 5;
    HZ_CORE_INFO(a);

    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}

#endif