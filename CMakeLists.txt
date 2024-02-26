cmake_minimum_required(VERSION 3.0)
project(RayTracer)

# Add all your source files here
set(SOURCES
    main.cpp
    camera.h
    color.h
    hittable.h
    hittables.h
    interval.h
    ray.h
    rtweekend.h
    sphere.h
    vec3.h
)

# Add executable target
add_executable(raytracer ${SOURCES})

# Set output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Set output directory for the generated files
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Copy image.ppm to the build directory
configure_file(image.ppm ${CMAKE_BINARY_DIR}/bin/image.ppm COPYONLY)

