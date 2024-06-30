#include "geometry.hpp"

namespace core
{
    basic_model_geometry Geometry::create_plane()
    {
        return
        {
            .vertices =
            {
                {  0.5f,  0.5f, 0.0f },
                {  0.5f, -0.5f, 0.0f },
                { -0.5f, -0.5f, 0.0f },
                { -0.5f,  0.5f, 0.0f }
            },
            .indices =
            {
                0, 1, 3,
                1, 2, 3
            }
        };
    }
}
