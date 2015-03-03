#include <boost/python.hpp>
#include "image.h"

void videoInit();

BOOST_PYTHON_MODULE(sdl2uipy) {
    using namespace boost::python;
    def("video_init", videoInit);

    class_<Image>("Image")
            .def("draw", &Image::draw);
}