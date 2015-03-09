#include <boost/python.hpp>
#include "image.h"

void videoInit();
void flipScreen();

BOOST_PYTHON_MODULE(sdl2uipy) {
    using namespace boost::python;
    def("video_init", videoInit);
    def("flip_screen", flipScreen);

    class_<Image>("Image")
            .def("draw", &Image::draw)
            .def("from_file", &Image::fromFile, return_value_policy<manage_new_object>())
			.staticmethod("from_file");
}