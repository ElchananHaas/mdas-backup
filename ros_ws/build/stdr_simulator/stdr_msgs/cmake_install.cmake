# Install script for directory: /home/mdas/ros_ws/src/stdr_simulator/stdr_msgs

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/mdas/ros_ws/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/Noise.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/LaserSensorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/SonarSensorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/KinematicMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/FootprintMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RobotMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RobotIndexedMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RobotIndexedVectorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidSensorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidSensorMeasurementMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidTag.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/RfidTagVector.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSensorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSensorMeasurementMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSource.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/SoundSourceVector.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSensorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSensorMeasurementMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSource.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/ThermalSourceVector.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2SensorMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2SensorMeasurementMsg.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2Source.msg"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/msg/CO2SourceVector.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/srv" TYPE FILE FILES
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/LoadMap.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/LoadExternalMap.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/RegisterGui.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/MoveRobot.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddRfidTag.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteRfidTag.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddThermalSource.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteThermalSource.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddSoundSource.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteSoundSource.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/AddCO2Source.srv"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/srv/DeleteCO2Source.srv"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/action" TYPE FILE FILES
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/action/RegisterRobot.action"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/action/SpawnRobot.action"
    "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/action/DeleteRobot.action"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotAction.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotActionGoal.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotActionResult.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotActionFeedback.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotGoal.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotResult.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/RegisterRobotFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotAction.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotActionGoal.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotActionResult.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotActionFeedback.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotGoal.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotResult.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/SpawnRobotFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/msg" TYPE FILE FILES
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotAction.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotActionGoal.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotActionResult.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotActionFeedback.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotGoal.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotResult.msg"
    "/home/mdas/ros_ws/devel/share/stdr_msgs/msg/DeleteRobotFeedback.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES "/home/mdas/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgs-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/mdas/ros_ws/devel/include/stdr_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/mdas/ros_ws/devel/share/common-lisp/ros/stdr_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/mdas/ros_ws/devel/lib/python2.7/dist-packages/stdr_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/mdas/ros_ws/devel/lib/python2.7/dist-packages/stdr_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mdas/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgs.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES "/home/mdas/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgs-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs/cmake" TYPE FILE FILES
    "/home/mdas/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgsConfig.cmake"
    "/home/mdas/ros_ws/build/stdr_simulator/stdr_msgs/catkin_generated/installspace/stdr_msgsConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stdr_msgs" TYPE FILE FILES "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/stdr_msgs" TYPE DIRECTORY FILES "/home/mdas/ros_ws/src/stdr_simulator/stdr_msgs/include/" FILES_MATCHING REGEX "/[^/]*\\.h$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

