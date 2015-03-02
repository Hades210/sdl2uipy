#include <boost/python.hpp>

const char* greet();

BOOST_PYTHON_MODULE(sdl2uipy){
    using namespace boost::python;
    def("greet", greet);
};