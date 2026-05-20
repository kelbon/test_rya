cmake_minimum_required(VERSION 3.20)
project(abc)

include(cmake/get_cpm.cmake)

CPMAddPackage(
  NAME RAPIDYAML
  GITHUB_REPOSITORY biojppm/rapidyaml
  GIT_TAG v0.12.1
  OPTIONS "RYML_WITH_TAB_TOKENS ON" "RYML_INSTALL OFF"
)

add_executable(abc  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_link_libraries(abc PUBLIC
    ryml
)
set_target_properties(abc PROPERTIES
	LINKER_LANGUAGE CXX
	CXX_STANDARD 23
	CMAKE_CXX_STANDARD_REQUIRED ON
)
