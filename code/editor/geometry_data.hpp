#pragma once

#include "math/vec3.hpp"

namespace core
{
    template <typename vertex_t> struct geometry_data
    {
        std::vector<vertex_t> vertices;
        std::vector<uint32_t> indices;
    };

    using basic_model_geometry = geometry_data<math::vec3>;
}