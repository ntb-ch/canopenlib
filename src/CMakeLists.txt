set(SRC_FILES
  can-if.c
  canopen.c
  canopen-com.c
  canopen-drv.c
  canopen-faulhaber-drv.c
  )

add_library(${STATIC_LIBRARY_NAME} ${SRC_FILES})

install(TARGETS ${STATIC_LIBRARY_NAME} ARCHIVE DESTINATION ${LIB_INSTALL_DIR})
install(DIRECTORY ../include/ DESTINATION ${INCLUDE_INSTALL_DIR})

include(CMakePackageConfigHelpers)

configure_package_config_file("../cmake/${CONFIG_CMAKE_IN_FILENAME}"
  "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  INSTALL_DESTINATION "${LIB_INSTALL_DIR}/${PROJECT_NAME}/cmake"
  PATH_VARS INCLUDE_INSTALL_DIR LIB_INSTALL_DIR)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake
  DESTINATION ${LIB_INSTALL_DIR}/${PROJECT_NAME}/cmake)

