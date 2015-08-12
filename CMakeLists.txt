cmake_minimum_required(VERSION 2.8)
PROJECT( sbplmg )

# version (e.g. for packaging)
set(SBPLMG_MAJOR_VERSION 1)
set(SBPLMG_MINOR_VERSION 2)
set(SBPLMG_PATCH_VERSION 0)
set(SBPLMG_VERSION ${SBPLMG_MAJOR_VERSION}.${SBPLMG_MINOR_VERSION}.${SBPLMG_PATCH_VERSION})

set(CMAKE_BUILD_TYPE Release)

include_directories(src/include)

add_library(sbplmg SHARED
  src/discrete_space_information/environment_nav2D.cpp
  src/discrete_space_information/environment_navxythetalat.cpp
  src/discrete_space_information/environment_navxythetamlevlat.cpp
  src/discrete_space_information/environment_nav2Duu.cpp
  src/discrete_space_information/environment_XXX.cpp
  src/discrete_space_information/environment_robarm.cpp
  src/planners/araplanner.cpp
  src/planners/adplanner.cpp
  src/planners/viplanner.cpp
  src/planners/ppcpplanner.cpp
  src/planners/ANAplanner.cpp
  src/planners/rstarplanner.cpp
  src/planners/lazyARA.cpp
  src/utils/heap.cpp
  src/utils/mdp.cpp
  src/utils/utils.cpp
  src/utils/2Dgridsearch.cpp
  src/utils/config.cpp	
  )

set(SBPLMG_INCLUDE_DIR "${CMAKE_INSTALL_PREFIX}/include")
set(SBPLMG_LIB_DIR "${CMAKE_INSTALL_PREFIX}/lib")
  
# support for pkg-config
set(PKG_NAME "sbplmg")
set(PKG_DESC "The Search Based Planning Library")
set(PKG_SBPLMG_LIBS "-lsbplmg")
set(pkg_conf_file_in "${CMAKE_CURRENT_SOURCE_DIR}/sbplmg.pc.in")
set(pkg_conf_file "${PROJECT_BINARY_DIR}/InstallFiles/sbplmg.pc")
configure_file("${pkg_conf_file_in}" "${pkg_conf_file}" @ONLY)
install(FILES ${pkg_conf_file} DESTINATION lib/pkgconfig/ COMPONENT pkgconfig)

# support for cmake-config:
configure_file(sbplmg-config.cmake.in
  "${PROJECT_BINARY_DIR}/InstallFiles/sbplmg-config.cmake" @ONLY)
configure_file(sbplmg-config-version.cmake.in
  "${PROJECT_BINARY_DIR}/InstallFiles/sbplmg-config-version.cmake" @ONLY)
install(FILES
  "${PROJECT_BINARY_DIR}/InstallFiles/sbplmg-config.cmake"
  "${PROJECT_BINARY_DIR}/InstallFiles/sbplmg-config-version.cmake"
DESTINATION share/sbplmg/)

install(DIRECTORY src/include/sbplmg DESTINATION include
	FILES_MATCHING PATTERN "*.h")
install(TARGETS sbplmg
	LIBRARY DESTINATION lib)

add_executable(test_sbpl src/test/main.cpp)
target_link_libraries(test_sbpl sbplmg)

add_executable(test_adjacency_list src/test/test_adjacency_list.cpp)
target_link_libraries(test_adjacency_list sbplmg)
