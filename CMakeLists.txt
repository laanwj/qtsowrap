cmake_minimum_required(VERSION 3.13)

project(qtsowrap
  VERSION 0.0.1
  DESCRIPTION "Dynamic wrapper for Qt's Linux dependencies."
  HOMEPAGE_URL "https://github.com/laanwj/qtsowrap"
  LANGUAGES C
)

# The library version is based on libtool versioning of the ABI. The set of
# rules for updating the version can be found here:
# https://www.gnu.org/software/libtool/manual/html_node/Updating-version-info.html
# All changes in experimental modules are treated as if they don't affect the
# interface and therefore only increase the revision.
set(${PROJECT_NAME}_LIB_VERSION_CURRENT 0)
set(${PROJECT_NAME}_LIB_VERSION_REVISION 0)
set(${PROJECT_NAME}_LIB_VERSION_AGE 1)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_EXTENSIONS OFF)

include_directories(include include_gen)
add_subdirectory(src_gen)
