// Some external c++ library - Must be at first place for windows purpose
#include <boost/filesystem.hpp>

#include <nanobind/nanobind.h>
#include <nanobind/stl/string.h>

#include <string>

namespace nb = nanobind;

using namespace nb::literals;

NB_MODULE(nanobind_example_ext, m) {
    m.doc() = "This is a \"hello world\" example with nanobind";
    m.def("add", [](int a, int b) { return a + b; }, "a"_a, "b"_a);
    m.def("cpath", []() {
        boost::filesystem::path full_path(boost::filesystem::current_path());
        return std::string(full_path.string());
      });
}
