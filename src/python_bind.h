#include <boost/python.hpp>

void videoInit();

BOOST_PYTHON_MODULE(sdl2uipy){
    using namespace boost::python;
    def("video_init", videoInit);
};