cmake_minimum_required(VERSION 4.0.1)

project(JsonParserDemo VERSION 0.0.1 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
    nlohmann_json_fc
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.12.0
)

FetchContent_MakeAvailable(nlohmann_json_fc)

add_executable(JsonDemo src/main.cpp)
target_link_libraries(JsonDemo PRIVATE nlohmann_json::nlohmann_json)

message(STATUS "Top-level CMakeLists.txt for JsonParserDemo processed.")
message(STATUS "nlohmann/json version ${nlohmann_json_fc_GIT_TAG} should be available.")
