# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "mapping_and_control: 0 messages, 1 services")

set(MSG_I_FLAGS "-Iroscpp:/opt/ros/indigo/share/roscpp/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Inav_msgs:/opt/ros/indigo/share/nav_msgs/cmake/../msg;-Itf:/opt/ros/indigo/share/tf/cmake/../msg;-Iactionlib_msgs:/opt/ros/indigo/share/actionlib_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(mapping_and_control_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv" NAME_WE)
add_custom_target(_mapping_and_control_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "mapping_and_control" "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv" "geometry_msgs/Point:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/PoseStamped:nav_msgs/Path:geometry_msgs/Pose"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(mapping_and_control
  "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/indigo/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mapping_and_control
)

### Generating Module File
_generate_module_cpp(mapping_and_control
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mapping_and_control
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(mapping_and_control_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(mapping_and_control_generate_messages mapping_and_control_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv" NAME_WE)
add_dependencies(mapping_and_control_generate_messages_cpp _mapping_and_control_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mapping_and_control_gencpp)
add_dependencies(mapping_and_control_gencpp mapping_and_control_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mapping_and_control_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(mapping_and_control
  "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/indigo/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mapping_and_control
)

### Generating Module File
_generate_module_lisp(mapping_and_control
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mapping_and_control
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(mapping_and_control_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(mapping_and_control_generate_messages mapping_and_control_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv" NAME_WE)
add_dependencies(mapping_and_control_generate_messages_lisp _mapping_and_control_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mapping_and_control_genlisp)
add_dependencies(mapping_and_control_genlisp mapping_and_control_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mapping_and_control_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(mapping_and_control
  "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/indigo/share/nav_msgs/cmake/../msg/Path.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mapping_and_control
)

### Generating Module File
_generate_module_py(mapping_and_control
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mapping_and_control
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(mapping_and_control_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(mapping_and_control_generate_messages mapping_and_control_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mdas/ros_ws/src/packages/high_level_control/sentry/mapping_and_control/srv/path.srv" NAME_WE)
add_dependencies(mapping_and_control_generate_messages_py _mapping_and_control_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(mapping_and_control_genpy)
add_dependencies(mapping_and_control_genpy mapping_and_control_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS mapping_and_control_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mapping_and_control)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/mapping_and_control
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET roscpp_generate_messages_cpp)
  add_dependencies(mapping_and_control_generate_messages_cpp roscpp_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(mapping_and_control_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(mapping_and_control_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET nav_msgs_generate_messages_cpp)
  add_dependencies(mapping_and_control_generate_messages_cpp nav_msgs_generate_messages_cpp)
endif()
if(TARGET tf_generate_messages_cpp)
  add_dependencies(mapping_and_control_generate_messages_cpp tf_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mapping_and_control)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/mapping_and_control
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET roscpp_generate_messages_lisp)
  add_dependencies(mapping_and_control_generate_messages_lisp roscpp_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(mapping_and_control_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(mapping_and_control_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET nav_msgs_generate_messages_lisp)
  add_dependencies(mapping_and_control_generate_messages_lisp nav_msgs_generate_messages_lisp)
endif()
if(TARGET tf_generate_messages_lisp)
  add_dependencies(mapping_and_control_generate_messages_lisp tf_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mapping_and_control)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mapping_and_control\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/mapping_and_control
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET roscpp_generate_messages_py)
  add_dependencies(mapping_and_control_generate_messages_py roscpp_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(mapping_and_control_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(mapping_and_control_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET nav_msgs_generate_messages_py)
  add_dependencies(mapping_and_control_generate_messages_py nav_msgs_generate_messages_py)
endif()
if(TARGET tf_generate_messages_py)
  add_dependencies(mapping_and_control_generate_messages_py tf_generate_messages_py)
endif()
