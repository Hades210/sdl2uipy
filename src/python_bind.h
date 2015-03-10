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
            .def_readonly("type", &SDL_Event::type);

	enum_<SDL_EventType>("EventType")
			.value("EVENT_TYPE_QUIT", SDL_QUIT);
}