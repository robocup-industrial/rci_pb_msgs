cmake_minimum_required(VERSION 2.8.7)
project(rcll_pb_msgs)
find_package(catkin REQUIRED)
find_package(Protobuf REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIRS})

catkin_package(
  INCLUDE_DIRS
    ${PROTOBUF_INCLUDE_DIRS}
  LIBRARIES
    rcll_pb_msgs
)

set(RCLL_PROTOS
  AttentionMessage.proto
  BeaconSignal.proto
  ExplorationInfo.proto
  GameInfo.proto
  GameState.proto
  MachineCommands.proto
  MachineInfo.proto
  MachineInstructions.proto
  MachineReport.proto
  OrderInfo.proto
  Pose2D.proto
  ProductColor.proto
  RingInfo.proto
  RobotCommands.proto
  RobotInfo.proto
  SimTimeSync.proto
  Team.proto
  Time.proto
  VersionInfo.proto
  Zone.proto
)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${RCLL_PROTOS})

add_custom_target(${PROJECT_NAME}_generate_headers
  DEPENDS ${PROTO_HDRS}
)

add_library(rcll_pb_msgs ${PROTO_SRCS})
target_link_libraries(rcll_pb_msgs ${PROTOBUF_LIBRARIES})
add_dependencies(rcll_pb_msgs ${PROJECT_NAME}_generate_headers)

file(MAKE_DIRECTORY ${CATKIN_DEVEL_PREFIX}/${CATKIN_GLOBAL_INCLUDE_DESTINATION}/${PROJECT_NAME} )
foreach(File ${PROTO_HDRS})
  add_custom_command(TARGET ${PROJECT_NAME}_generate_headers POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${File} ${CATKIN_DEVEL_PREFIX}/${CATKIN_GLOBAL_INCLUDE_DESTINATION}/${PROJECT_NAME} 
  )
endforeach()

install(TARGETS rcll_pb_msgs
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(FILES ${PROTO_HDRS}
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)

