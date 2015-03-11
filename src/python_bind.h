#include <boost/python.hpp>
#include "image.h"
#include "events.h"

void videoInit();
void flipScreen();

BOOST_PYTHON_MODULE(sdl2uipy) {
    using namespace boost::python;
    def("video_init", videoInit);
    def("flip_screen", flipScreen);
    def("get_event", getEvent, return_value_policy<manage_new_object>());
	
    class_<Image>("Image")
            .def("draw", &Image::draw)
            .def("from_file", &Image::fromFile, return_value_policy<manage_new_object>())
			.staticmethod("from_file");

    class_<SDL_Event>("Event")
            .def_readonly("type", &SDL_Event::type)
            .def_readonly("mouse_button", &SDL_Event::button);

    class_<SDL_MouseButtonEvent>("MouseButtonEvent")
            .def("button", &SDL_MouseButtonEvent::button)
            .def("state", &SDL_MouseButtonEvent::state)
            .def("x", &SDL_MouseButtonEvent::x)
            .def("y", &SDL_MouseButtonEvent::y);

	enum_<SDL_EventType>("EventType")
			.value("QUIT", SDL_QUIT)
            .value("MOUSEBUTTON_UP", SDL_MOUSEBUTTONUP);
}