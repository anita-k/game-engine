#include <Hazel.h>
#include <Entrypoint.h>

class Sandbox : public Hazel::Application {
public:
    Sandbox() {

    }

    ~Sandbox() {

    }
};

Hazel::Application* Hazel::CreateApplication() {
    HZ_INFO("Info message");
    HZ_TRACE("Debug message");
    HZ_WARN("Warning message");
    HZ_ERROR("Error message");
    HZ_CRITICAL("Critical message");
    return new Sandbox();
}